#include "Statement.h"
#include "Function.h"
#include <unordered_map>

extern FILE *yyout;

bool isStringType(RustExpr* expr) {
  if (auto rustId = dynamic_cast<RustId*>(expr)) {
      return rustId->getSE() && rustId->getSE()->getType()->isString();
  }
  if (auto rustConstant = dynamic_cast<RustConstant*>(expr)) {
      return rustConstant->getSE() && rustConstant->getSE()->getType()->isString();
  }
  if (auto rustBinaryExpr = dynamic_cast<RustBinaryExpr*>(expr)) {
    return isStringType(rustBinaryExpr->getExpr1());
  }
  return false;
}

// 定义一个映射表
std::unordered_map<std::string, std::string> replacementMap = {
  {"Image", ".to_string()"},
  {"First", "::MIN"},
  {"Last", "::MAX"},
  {"Integer", "i32"},
  {"Boolean", "bool"},
  {"Character", "char"},
  {"String", "String"},
  {"Float", "f32"}
};

// 替换函数
std::string replaceString(const std::string& input) {
  auto it = replacementMap.find(input);
  if (it != replacementMap.end()) {
      return it->second;
  }
  return input;
}

int RustNode::counter = 0;

// RustNode 构造函数，初始化 seq 为 counter 并递增 counter
RustNode::RustNode() { seq = counter++; }

// 设置下一个节点
void RustNode::setNext(RustNode *node) {
  RustNode *n = this;
  while (n->getNext()) {
    n = n->getNext();
  }
  if (n == this) {
    this->next = node;
  } else {
    n->setNext(node);
  }
}

// 设置下一个语句节点
void RustStmt::setNext(RustStmt *node) {
  RustStmt *n = this;
  while (n->getNext()) {
    n = n->getNext();
  }
  if (n == this) {
    this->next = node;
  } else {
    n->setNext(node);
  }
}

// RustStmt 构造函数，如果 func 不为空，则插入语句
RustStmt::RustStmt(Function *func) {
  if (func) {
    func->insertStmts(this);
  }
}

std::string RustPackageCall::output(int level) const {}

// 输出 RustId 的字符串表示
std::string RustId::output() const {
  
  if (name) {
    if (!attr.empty()) {
      //类型自带的attribute
      char res[50];
      sprintf(res, "%s%s", replaceString(name->output()).c_str(), replaceString(attr).c_str());
      return std::string(res);
    } 
    else if (expr) {
      std::string paramStr;
      RustExpr *temp = expr;
      paramStr += temp->output();
      if (temp->getNext()) {
        paramStr += ", ";
        temp = dynamic_cast<RustExpr *>(temp->getNext());
        paramStr += temp->output();
      }
      char res[50];
      auto idSymbolEntry = dynamic_cast<IdentifierSymbolEntry*>(name->getSE());
      if (idSymbolEntry && idSymbolEntry->getIsArray()) {
        sprintf(res, "%s[%s - %d]", name->output().c_str(), paramStr.c_str(), idSymbolEntry->getOffset());
      } else if(!name->getAttr()->empty()){
        sprintf(res, "%s%s", paramStr.c_str(), replaceString(*name->getAttr()).c_str());
      } else {
        sprintf(res, "%s(%s)", name->output().c_str(), paramStr.c_str());
      }
      return std::string(res);
    } else {
      char res[100];
      sprintf(res, "%s", attr.c_str());
      // 输出示例: "name"
      return std::string(res);
    }
  } else {
      return se->dump();
  }
}

// 输出 RustConstant 的字符串表示
std::string RustConstant::output() const { return se->dump(); }

// 输出 RustFactor 的字符串表示
std::string RustFactor::output() const {
  std::string opMethod;
  switch (op) {
  case RustFactor::NOT:
    opMethod = "!";
    break;
  case RustFactor::ABS:
    opMethod = "";
  }
  return opMethod + rustExpr->output();
}

// 输出 RustBinaryExpr 的字符串表示
std::string RustBinaryExpr::output() const {
  std::string opSignName;
  switch (sign) {
  case RustBinaryExpr::MUL:
    opSignName = "*";
    break;
  case RustBinaryExpr::DIV:
    opSignName = "/";
    break;
  case RustBinaryExpr::MOD:
    opSignName = "%";
    break;
  case RustBinaryExpr::REM:
    opSignName = "rem";
    break;
  case RustBinaryExpr::ADD:
    opSignName = "+";
    break;
  case RustBinaryExpr::SUB:
    opSignName = "-";
    break;
  case RustBinaryExpr::SINGLEAND:
    opSignName = "+";
    break;
  case RustBinaryExpr::EQ:
    opSignName = "==";
    break;
  case RustBinaryExpr::NE:
    opSignName = "!=";
    break;
  case RustBinaryExpr::LE:
    opSignName = "<";
    break;
  case RustBinaryExpr::LTEQ:
    opSignName = "<=";
    break;
  case RustBinaryExpr::GE:
    opSignName = ">";
    break;
  case RustBinaryExpr::GTEQ:
    opSignName = ">=";
    break;
  case RustBinaryExpr::ANDTHEN:
    opSignName = "and then";
    break;
  case RustBinaryExpr::ORELSE:
    opSignName = "or else";
    break;
  case RustBinaryExpr::AND:
    opSignName = "&&";
    break;
  case RustBinaryExpr::OR:
    opSignName = "||";
    break;
  case RustBinaryExpr::XOR:
    opSignName = "xor";
    break;
  default:
    break;
  }

  char temp[80];
  if (isUnary) {
    sprintf(temp, "%s%s", opSignName.c_str(), rustExpr1->output().c_str());
    // 输出示例: "opSignName expr1"
    // 具体示例: "-x"
    return std::string(temp);
  } else if (isMember) {
    if (se) {
      if (sign == RustBinaryExpr::IN) {
        // 处理 IN 操作符
      } else if (sign == RustBinaryExpr::NOTIN) {
        // 处理 NOT IN 操作符
      } else {
        sprintf(temp, "%s %s &%s", rustExpr1->output().c_str(), opSignName.c_str(),
                se->dump().c_str());
        // 输出示例: "expr1 opSignName se"
        // 具体示例: "x + y"
      }
    }
    if (rustRange) {
      RustExpr *low = rustRange->getLow();
      RustExpr *upper = rustRange->getUpper();
      if (sign == RustBinaryExpr::IN) {
        sprintf(temp, "%s >= %s && %s <= %s", rustExpr1->output().c_str(),
                low->output().c_str(), rustExpr1->output().c_str(),
                upper->output().c_str());
        // 输出示例: "expr1 >= low && expr1 <= upper"
        // 具体示例: "x >= 1 && x <= 10"
      } else if (sign == RustBinaryExpr::NOTIN) {
        sprintf(temp, "%s < %s || %s > %s", rustExpr1->output().c_str(),
                low->output().c_str(), rustExpr1->output().c_str(),
                upper->output().c_str());
        // 输出示例: "expr1 < low || expr1 > upper"
        // 具体示例: "x < 1 || x > 10"
      } else {
        std::cerr << "[RUSTBINARY OUTPUT ERROR] Not match sign of Range!\n";
        return std::string();
      }
    }
    return std::string(temp);
  } else {
    if ((isStringType(rustExpr1) || isStringType(rustExpr2)) && opSignName == "+") {
      sprintf(temp, "format!(\"{}{}\", %s, %s)", rustExpr1->output().c_str(), rustExpr2->output().c_str());
    } else
      sprintf(temp, "%s %s %s", rustExpr1->output().c_str(), opSignName.c_str(),
            rustExpr2->output().c_str());
    // 输出示例: "expr1 opSignName expr2"
    // 具体示例: "a + b" 
    return std::string(temp);
  }
}

// 输出 RustArrayDef 的字符串表示
std::string RustArrayDef::output() const {
  char temp[200];
  std::string size = range->getUpper()->output() + " - " + range->getLow()->output() + " + 1";
  sprintf(temp, "[%s; %s]", arraytype->toRustStr().c_str(), size.c_str());
  // 输出示例: "[arraytype; size]"
  // 具体示例: "[i32; 10 - 3 + 1]"
  return std::string(temp);
}

// 输出 RustSeqStmt 的字符串表示
std::string RustSeqStmt::output(int level) const {
  std::string res = stmt->output(level);
  if (this->getNext()) {
    res += this->getNext()->output(level);
  }
  return res;
}

// 输出 RustDummyStmt 的字符串表示
std::string RustDummyStmt::output(int level) const {
  char temp[80];
  sprintf(temp, "%*c;\n", level, ' ');
  // 输出示例: "    ;"
  return std::string(temp);
}

// 输出 RustAssignStmt 的字符串表示
std::string RustAssignStmt::output(int level) const {
  char temp[200];
  sprintf(temp, "%*c%s = %s;\n", level, ' ', se->dump().c_str(),
          rustExpr->output().c_str());
  // 输出示例: "    se = expr;"
  // 具体示例: "    x = 42;"
  return std::string(temp);
}

// 输出 RustReturnStmt 的字符串表示
std::string RustReturnStmt::output(int level) const {
  char temp[200];
  if (retValue) {
    sprintf(temp, "%*creturn %s;\n", level, ' ', retValue->output().c_str());
    // 输出示例: "    return expr;"
    // 具体示例: "    return x;"
  } else {
    sprintf(temp, "%*creturn;\n", level, ' ');
    // 输出示例: "    return;"
  }
  return std::string(temp);
}

std::string RustPutStmt::output(int level) const {
  char temp[200];
  sprintf(temp, "%*cprint!(\"{}\", %s);\n", level, ' ', rustExpr->output().c_str());
  // 输出示例: "    print!("{}", expr);"
  return std::string(temp);
}

std::string RustGetStmt::output(int level) const {
  char res[600];
  sprintf(res, R"deli(%*clet mut %s = String::new();
%*cio::stdin().read_line(&mut %s).expect("Failed to read line");
%*clet %s: %s = %s.trim().parse().unwrap();
)deli",
  level, ' ', id->dump().c_str(), 
  level, ' ', id->dump().c_str(), 
  level, ' ', id->dump().c_str(), id->getType()->toRustStr().c_str(), id->dump().c_str());
  // 输出示例:
  // let mut id = String::new();
  // io::stdin().read_line(&mut id).expect("Failed to read line");
  // let id: Type = id.trim().parse().unwrap();
  return std::string(res);
}

std::string RustPutlineStmt::output(int level) const {
  char temp[200];
  sprintf(temp, "%*cprintln!(\"{}\", %s);\n", level, ' ', rustExpr->output().c_str());
  // 输出示例: "    se = expr;"
  // 具体示例: "    x = 42;"
  return std::string(temp);
}

// 输出 RustCallStmt 的字符串表示
std::string RustCallStmt::output(int level) const {
  char temp[200];
  std::string paramStr;
  if (!rustId->getParam()) {
    paramStr = "";
  }
  else {
    RustExpr *temp = rustId->getParam();
    paramStr += temp->output();
    while (temp) {
      temp = dynamic_cast<RustExpr *>(temp->getNext());
      if (temp) {
        paramStr += ", ";
        paramStr += temp->output();
      }
    }
  }
  if(rustId->getName())
    sprintf(temp, "%*c%s(%s);\n", level, ' ',rustId->getName()->output().c_str() ,paramStr.c_str());
  else
    sprintf(temp, "%*c%s(%s);\n", level, ' ',rustId->output().c_str() ,paramStr.c_str());
  // 输出示例: "    cId();"
  // 具体示例: "    foo();"
  return std::string(temp);
}

// 输出 RustCondClause 的字符串表示
std::string RustCondClause::output(int level) const {
  std::string stmtStr = stmts->output(level + 4);
  std::string resStr;
  char res[200];
  sprintf(res, R"deli(%*cif %s {
%s%*c}
)deli",
          level, ' ', cond->output().c_str(), stmtStr.c_str(), level, ' ');
  // 输出示例:
  // if cond {
  //     stmts
  // }
  // 具体示例:
  // if x > 0 {
  //     println!("Positive");
  // }
  RustCondClause *elseIf = dynamic_cast<RustCondClause *>(this->getNext());
  resStr += std::string(res);
  while (elseIf) {
    char temp[200];
    std::string elseIfStmtStr = elseIf->getStmts()->output(level + 4);
    sprintf(temp, R"deli(%*celse if %s {
%s%*c}
)deli",
            level, ' ', elseIf->getCond()->output().c_str(),
            elseIfStmtStr.c_str(), level, ' ');
    // 输出示例:
    // else if cond {
    //     stmts
    // }
    // 具体示例:
    // else if x == 0 {
    //     println!("Zero");
    // }
    elseIf = dynamic_cast<RustCondClause *>(elseIf->getNext());
    resStr += std::string(temp);
  }
  return resStr;
}

// 输出 RustIfStmt 的字符串表示
std::string RustIfStmt::output(int level) const {
  char res[2000];
  if (elsestmt) {
    std::string elseStr = elsestmt->output(level + 4);
    sprintf(res, R"deli(%s%*celse {
%s%*c}
)deli",
            clause->output(level).c_str(), level, ' ', elseStr.c_str(), level,
            ' ');
    return std::string(res);
  }
  return clause->output(level);
}


// 输出 RustIteration 的字符串表示
std::string RustIteration::output(int level) const {
  char res[200];
  if (cond) {
    sprintf(res, "while %s", cond->output().c_str());
  } else {
    if (isReverse) {
      sprintf(res, "for %s in (%s..=%s).rev()", se->dump().c_str(),
              range->getLow()->output().c_str(),
              range->getUpper()->output().c_str());
    } else {
      sprintf(res, "for %s in %s..=%s", se->dump().c_str(),
              range->getLow()->output().c_str(),
              range->getUpper()->output().c_str());
    }
  }
  return std::string(res);
}

// 输出 RustLoopStmt 的字符串表示
std::string RustLoopStmt::output(int level) const {
  char res[4000];
  if (rustIter) {
    sprintf(res, R"deli(%*c%s {
%s%*c}
)deli",
            level, ' ', rustIter->output(level).c_str(),
            loop->output(level + 4).c_str(), level, ' ');
    // 输出示例:
    // iter {
    //     loopStmts
    // }
    // 具体示例:
    // for i in 0..10 {
    //     println!("{}", i);
    // }
  } else {
    sprintf(res, R"deli(%*cloop {
%s%*c}
)deli",
            level, ' ', loop->output(level + 4).c_str(), level, ' ');
    // 输出示例:
    // while true {
    //     loopStmts
    // }
  }
  return std::string(res);
}

// 输出 RustCaseStmt 的字符串表示
std::string RustCaseStmt::output(int level) const {
  std::string resStr;
  std::string exprStr = rustExpr->output();
  bool haveElse = false;
  RustSeqStmt *elseStmts;
  RustAlternative *temp = alter;
  char matchStr[200];
  sprintf(matchStr, "%*cmatch %s {\n", level, ' ', exprStr.c_str());
  resStr += std::string(matchStr);
  while (temp) {
    char tempIf[300];
    RustChoice *choices = temp->getChoices();
    RustSeqStmt *stmts = temp->getStmts();
    std::string condStr;
    bool isFirst = true;
    while (choices) {
      char tempCond[50];
      if (choices->getIsExpr()) {
        sprintf(tempCond, "%s", choices->getExpr()->output().c_str());
        // 输出示例: "choice_expr"
      } else if (choices->getIsRange()) {
        sprintf(tempCond, "%s..=%s", 
                choices->getRange()->getLow()->output().c_str(),
                choices->getRange()->getUpper()->output().c_str());
        // 输出示例: "range_low..=range_high"
        // 具体示例: "1..=10"
      } else {
        haveElse = true;
        elseStmts = stmts;
        break;
      }
      if (isFirst) {
        condStr += std::string(tempCond);
        isFirst = false;
      } else {
        condStr += std::string(" | ") + std::string(tempCond);
      }
      choices = dynamic_cast<RustChoice *>(choices->getNext());
    }
    if (condStr.empty())
    break;
    sprintf(tempIf, R"deli(%*c%s => {
%s%*c}
)deli",
              level + 4, ' ', condStr.c_str(), stmts->output(level + 8).c_str(),
              level + 4, ' ');
      // 输出示例:
      // match (cond) {
      //     stmts
      // }
      resStr += std::string(tempIf);
    temp = dynamic_cast<RustAlternative *>(temp->getNext());
  }
  if (haveElse) {
    char tempElse[300];
    sprintf(tempElse, R"deli(%*c_ => {
%s%*c}
%*c}
)deli",
            level + 4, ' ', elseStmts->output(level + 8).c_str(), level + 4, ' ', level, ' ');
    // 输出示例:
    // _ => {
    //     elseStmts
    // }
    resStr += std::string(tempElse);
  }
  else {
    char tempEnd[50];
    sprintf(tempEnd, "%*c_ => {}\n%*c}\n", level+4, ' ', level, ' ');
    resStr += std::string(tempEnd);
  }
  return resStr;
}

// 输出 RustExitStmt 的字符串表示
std::string RustExitStmt::output(int level) const {
  char res[200];
  if (rustCond) {
    sprintf(res, R"deli(%*cif %s {
%*cbreak;
%*c}
)deli",
            level, ' ', rustCond->output().c_str(), level + 4, ' ', level, ' ');
    // 输出示例:
    // if (cond) {
    //     break;
    // }
  } else {
    sprintf(res, "%*cbreak;\n", level, ' ');
    // 输出示例:
    // break;
  }
  return std::string(res);
}

// 输出 RustBlockStmt 的字符串表示
std::string RustBlockStmt::output(int level) const {
  std::string res;
  for (auto op : declvec) {
    char temp[200];
    RustExpr *init = op->getInit();
    std::string typeName = op->typeName();
    //if (op->getConst()) {
    //  typeName = "const " + typeName;
    //}
    if (init)
      sprintf(temp, "%*clet %s: %s = %s;\n", level, ' ', 
              op->getName().c_str(), typeName.c_str(), init->output().c_str());
    else
      sprintf(temp, "%*clet %s: %s;\n", level, ' ',
              op->getName().c_str(), typeName.c_str());
    // 输出示例:
    // let name: typeName = init;
    // 具体示例:
    // let x: AdaInteger = 42;
    res += temp;
  }
  res += stmts->output(level);
  return res;
}

// RustFuncDecl 构造函数
RustFuncDecl::RustFuncDecl(Function *_func, SymbolEntry *_se) : RustStmt(nullptr) {
  se = _se;
  _func->insertDecls(this);
}

// 输出 RustFuncDecl 的字符串表示
std::string RustFuncDecl::output(int level) const {
  char res[200];
  //std::string paramStr=func->getParamStr();
  //sprintf(res, "%*cfn %s();", level, ' ', se->dump().c_str());
  // Rust不需要声明函数
  return std::string(res);
}

// RustTypeDecl 构造函数 
RustTypeDecl::RustTypeDecl(Function *_func, RustExpr *_rustExpr, SymbolEntry *_se)
    : RustStmt(nullptr) {
  se = _se;
  rustExpr = _rustExpr;
  _func->insertDecls(this);
}

// RustTypeDecl 构造函数 
RustTypeDecl::RustTypeDecl(Function *_func, RustDefId *_id)
    : RustStmt(nullptr) {
  id = _id;
  _func->insertDecls(this);
}

// 输出 RustTypeDecl 的字符串表示
std::string RustTypeDecl::output(int level) const {
  if(id){
    std::string res;
    RustDefId *temp = id;
    int count = 0;
    while (temp) {
      res += std::string(level, ' ') + "let " + temp->output(level) + ": i32 = " + 
             std::to_string(count) + ";\n";
      count++;
      temp = dynamic_cast<RustDefId *>(temp->getNext());
    }
    return res;
  }
  char res[200];
  sprintf(res, "%*ctype %s = %s;\n", level, ' ', se->dump().c_str(),
          rustExpr->output().c_str());
  // 输出示例: "    type se = expr;"
  // 具体示例: "    type x = sometype;"
  return std::string(res);
}

// RustArrayDecl 构造函数
RustArrayDecl::RustArrayDecl(Function *_func, RustDefId *_defids, SymbolEntry *_se, RustExpr *_expr)
    : RustStmt(nullptr) {
  defids = _defids;
  se = _se;
  rustExpr = _expr;
  _func->insertDecls(this);
}

// 输出 RustArrayDecl 的字符串表示
std::string RustArrayDecl::output(int level) const {
  char res[200];
  sprintf(res, "%*clet %s: %s = [%s];\n", level, ' ', defids->output(level).c_str(),
          se->dump().c_str(), rustExpr->output().c_str());
  // 输出示例: "    let name: se = [expr];"
  // 具体示例: "    let x: IntArray = [1, 2, 3];"
  return std::string(res);
}

// 输出 RustArrayInit 的字符串表示
std::string RustArrayInit::output() const {
  std::string res;
  RustExpr *temp = initExpr;
  while (temp) {
    res += temp->output();
    temp = dynamic_cast<RustExpr *>(temp->getNext());
    if (temp) {
      res += ", ";
    }
  }
  return res;
}