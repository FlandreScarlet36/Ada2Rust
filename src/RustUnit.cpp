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

void RustUnit::output() const {
  AdaInteger::getInstance().output();
  AdaNatural::getInstance().output();
  AdaString::getInstance().output();

  for (auto &func : funcList) {
    std::string temp = func->output(0);
    fprintf(yyout, "%s", temp.c_str());
  }
  for (auto item : opList) {
    Function *func = item.first;
    std::vector<Operand *> *vec = item.second;
    for (auto op : *vec) {
      // Simple Operand Name
      std::string opName = getOpFullName(func, op);
      RustExpr *init = op->getInit();
      if (init) {
        fprintf(yyout, "%s %s = %s;\n", op->typeName().c_str(), opName.c_str(),
                init->output().c_str());
      } else {
        fprintf(yyout, "%s %s = 0;\n", op->typeName().c_str(), opName.c_str());
      }
    }
  }
}