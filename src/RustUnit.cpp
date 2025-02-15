#include "RustUnit.h"

extern FILE *yyout;

std::string RustUnit::getOpFullName(Function *func, Operand *op) {
  std::string fullName = func->getName() + "::" + op->getName();
  Function *temp = func;
  Function *prev;
  while (prev = temp->getPrev()) {
    fullName = prev->getName() + "::" + fullName;
    temp = prev;
  }
  return fullName;
}

std::string RustUnit::getOpName(Operand *op) {
  return op->getName();
}

std::vector<Operand*>* RustUnit::getOperandsForFunction(Function *func) const {
  auto it = opList.find(func);
  if (it != opList.end()) {
    return it->second;
  }
  return nullptr; // 如果没有找到对应的vec，返回nullptr
}

void RustUnit::output() const {
  AdaInteger::getInstance().output();
  AdaNatural::getInstance().output();
  AdaString::getInstance().output();

  // for (auto item : opList) {
  //   Function *func = item.first;
  //   std::vector<Operand *> *vec = item.second;
  //   for (auto op : *vec) {
  //     // Simple Operand Name
  //     //std::string opName = getOpFullName(func, op);
  //     std::string opName = getOpName(op);
  //     RustExpr *init = op->getInit();
  //     if (init) {
  //       fprintf(yyout, "let mut %s = %s::new(%s);\n", opName.c_str(), op->typeName().c_str(), 
  //               init->output().c_str());
  //               //let mut I = AdaInteger::new(1);
  //     } else {
  //       fprintf(yyout, "let mut %s = %s::new(0);\n", op->typeName().c_str(), opName.c_str());
  //     }
  //   }
  // }

  for (auto &func : funcList) {
    std::string temp = func->output(0);
    fprintf(yyout, "%s", temp.c_str());
  }
}