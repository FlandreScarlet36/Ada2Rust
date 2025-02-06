#ifndef __ADA2RUST_OPERAND_H__
#define __ADA2RUST_OPERAND_H__

#include "SymbolTable.h"
#include "Type.h"

class RustExpr;

class Operand {
private:
  SymbolEntry *se;
  Type *type;
  // Init value of Operand
  RustExpr *init;

  // Constant or not;
  bool isConst;

public:
  Operand(SymbolEntry *_se, Type *_type, RustExpr *_init = nullptr)
      : se(_se), type(_type), init(_init) {}
  Operand(SymbolEntry *_se, Type *_type, bool _isConst,
          RustExpr *_init = nullptr)
      : se(_se), type(_type), isConst(_isConst), init(_init) {}
  std::string getName() { return se->dump(); }
  std::string typeName() { return type->toRustStr(); }
  Type *getType() { return type; }
  RustExpr *getRustExpr() { return init; }
  RustExpr *getInit() { return init; }
  bool getConst() { return isConst; }
};

#endif