#include "Function.h"
#include "RustUnit.h"
#include "Type.h"
#include <list>

extern FILE *yyout;

// 构造函数：将函数插入到Rust单元中
Function::Function(RustUnit *unit, SymbolEntry *symbol) {
  unit->insertFunc(this);
  symPtr = symbol;
  parent = unit;
}

// 构造函数：将子函数添加到父函数中
Function::Function(Function *func, SymbolEntry *symbol) {
  func->addSubFunc(this);
  prev = func;
  symPtr = symbol;
}

// 析构函数：从父单元中移除函数
Function::~Function() {
  if (parent)
    parent->removeFunc(this);
}

// 获取函数声明字符串
std::string Function::getDeclStr(int level) const {
  std::string declStr;
  // 1. 处理操作数声明
  for (auto op : declOps) {
    char temp[100];
    sprintf(temp, "%*cstatic %s %s;\n", level, ' ', op->typeName().c_str(),
            op->getName().c_str());
    declStr += std::string(temp);
  }
  // 2. 处理其他声明
  for (auto decl : decls) {
    declStr += decl->output(level);
  }
  // 3. 处理子过程定义
  for (auto &func : subFuncs) {
    std::string temp = func->output(level);
    declStr += temp;
  }
  return declStr;
}

// 获取函数参数字符串
std::string Function::getParamStr() const {
  std::string paramStr;
  std::vector<Type *> paramType;
  std::vector<SymbolEntry *> paramIds;
  // 如果是过程类型，获取参数类型和参数标识符
  if (symPtr->getType()->isProcedure()) {
    ProcedureType *type = dynamic_cast<ProcedureType *>(symPtr->getType());
    paramType = type->getParamType();
    paramIds = type->getParamIds();
  }
  // 如果是函数类型，获取参数类型和参数标识符
  if (symPtr->getType()->isFunction()) {
    FunctionType *type = dynamic_cast<FunctionType *>(symPtr->getType());
    paramType = type->getParamType();
    paramIds = type->getParamIds();
  }
  paramStr += "(";
  if (paramType.empty()) {
    paramStr += ")";
    return paramStr;
  }
  // 生成参数字符串
  for (auto i = 0; i < paramType.size() - 1; i++) {
    paramStr += paramType[i]->toRustStr() + " " + paramIds[i]->dump() + ", ";
  }
  paramStr += paramType.back()->toRustStr() + " " + paramIds.back()->dump();
  paramStr += ")";
  return paramStr;
}

// 获取函数语句字符串
std::string Function::getStmtStr(int level) const {
  std::string stmtStr;
  return stats.front()->output(level);
}

// 获取变量声明字符串
std::string Function::getVarStr(int level) const {
  std::string varStr;
  std::string indent(level, ' '); // 创建缩进字符串
  for (auto item : parent->getOpList()) {
    Function *func = item.first;
    std::vector<Operand *> *vec = item.second;
    for (auto op : *vec) {
      // Simple Operand Name
      // std::string opName = getOpFullName(func, op);
      std::string opName = parent->getOpName(op);
      RustExpr *init = op->getInit();
      if (init) {
        varStr += indent + "let mut " + opName + " = " + op->typeName() + "::new(" + init->output() + ");\n";
        // let mut I = AdaInteger::new(1);
      } else {
        varStr += indent + "let mut " + opName + ": " + op->typeName() + ";\n";
        // let mut I = AdaInteger::new(0);
      }
    }
  }
  return varStr;
}

// 输出函数的Rust代码
std::string Function::output(int level) const {
  // 将Ada语法的过程转换为Rust语法的函数
  // 例如：
  /*
    procedure main is
    begin
    ...
    end main;
  */
  /*
    pub fn main() {
        ...
    }
  */
  // 1. 获取声明字符串
  std::string declStr = getDeclStr(level + 4);
  // 2. 获取参数字符串
  std::string paramStr = getParamStr();
  // 3. 获取语句字符串
  std::string stmtStr = getStmtStr(level + 4);
  // 4. 获取变量声明字符串
  std::string varStr = getVarStr(level + 4);
  
  char resStr[MAX_OUTPUT_LENGTH];
  sprintf(resStr, R"deli(
pub fn %s%s {
%s
%s}
)deli",
          symPtr->dump().c_str(), paramStr.c_str(), varStr.c_str(), stmtStr.c_str());
  return std::string(resStr);
}