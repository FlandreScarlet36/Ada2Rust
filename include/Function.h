#ifndef __ADA2RUST_FUNCTION_H__
#define __ADA2RUST_FUNCTION_H__

#include "Operand.h"
#include "Statement.h"
#include "SymbolTable.h"
#include "Type.h"
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

#define MAX_OUTPUT_LENGTH 100000

class RustUnit;

// Ada Procedure and Ada Function => Rust Function
class Function {
private:
  // Name of Procedure or Function
  SymbolEntry *symPtr;
  RustUnit *parent;
  Function *prev = nullptr;

  // Some declared operands.
  std::vector<Operand *> declOps;
  // Some declarations.
  std::vector<RustStmt *> decls;
  // Some procedure.
  std::vector<Function *> subFuncs;

  // Some statements.
  std::vector<RustStmt *> stats;

public:
  Function(RustUnit *unit, SymbolEntry *symbol);
  Function(Function *func, SymbolEntry *symbol);
  ~Function();
  void addDeclOps(Operand *op) { declOps.push_back(op); }
  void setPrev(Function *func) { prev = func; }
  Function* getPrev() { return prev; }
  void addSubFunc(Function *func) { subFuncs.push_back(func); }
  std::string getName() { return symPtr->dump(); }
  SymbolEntry *getSymPtr() { return symPtr; };
  Type *getType() { return symPtr->getType(); }
  bool isProcedure() { return getType()->isProcedure(); }
  bool isFunction() { return getType()->isFunction(); }
  bool haveDeclOp() const { return !declOps.empty(); }
  void insertStmts(RustStmt *stmt) { stats.push_back(stmt); }
  void insertDecls(RustStmt *decl) { decls.push_back(decl); }
  std::string getDeclStr(int level) const;
  std::string getStmtStr(int level) const;
  std::string getParamStr() const;
  Type *getReturnType() const;
  std::string getVarStr(int level) const;
  std::string output(int level) const;
};

#endif