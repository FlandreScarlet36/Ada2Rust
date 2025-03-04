#include "RustUnit.h"

extern FILE *yyout;


std::string RustUnit::getOpName(Operand *op) {
  return op->getName();
}

void RustUnit::output() const {
  fprintf(yyout, R"(use std::io::{self, Write};
)");

  for (auto &func : funcList) {
    std::string temp = func->output(0);
    fprintf(yyout, "%s", temp.c_str());
  }
}