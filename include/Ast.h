#ifndef __ADA2RUST_AST_H__
#define __ADA2RUST_AST_H__

#include "RustBuilder.h"
#include "RustUnit.h"
#include "Operand.h"
#include <SymbolTable.h>
#include <Type.h>
#include <iostream>
#include <stack>
using namespace std;

class SymbolEntry;
class RustUnit;
class Function;
class Procedure;
class RustBuilder;

// Split up Ada grammar to some Grammar Node
// The Nodes are following Ada grammar.

class Node {
private:
  static int counter;
  int seq;
  Node *next;

protected:
  static RustBuilder *builder;

public:
  Node();
  int getSeq() const { return seq; };
  void setNext(Node *node);
  Node *getNext() { return next; }
  static void setRustBuilder(RustBuilder *cb) { builder = cb; };
  virtual void dump(int level) = 0;
  virtual void genRustCode(Node *parent){};
};

class OpSignNode : public Node {
private:
  int kind;

public:
  enum {
    REVERSE,
    MUL,
    DIV,
    MOD,
    REM,
    ADD,
    SUB,
    SINGLEAND,
    IN,
    NOTIN,
    EQ,
    NE,
    LE,
    LTEQ,
    GE,
    GTEQ,
    ANDTHEN,
    ORELSE,
    AND,
    OR,
    XOR,
    EXPON,
  };
  OpSignNode(int _kind) : kind(_kind){};
  int getKind() { return kind; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ExprNode : public Node {
protected:
  RustExpr *rustExpr;

public:
  virtual Type *getType() = 0;
  RustExpr *getRustExpr() { return rustExpr; };
  virtual void genRustCode(Node *parent){};
};

class StmtNode : public Node {
protected:
  StmtNode *next;
  RustStmt *rustStmt;

public:
  RustStmt *getRustStmt() { return rustStmt; }
  void setNext(StmtNode *node);
  StmtNode *getNext() { return next; }
  virtual void genRustCode(Node *parent){};
};

class Range : public StmtNode {
private:
  ExprNode *lowerbound;
  ExprNode *upperbound;

public:
  Range(ExprNode *_lowerbound, ExprNode *_upperbound)
      : lowerbound(_lowerbound), upperbound(_upperbound){};
  Type *getType() { return lowerbound->getType(); }
  ExprNode *getLowerbound() { return lowerbound; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class Id : public ExprNode {
private:
  SymbolEntry *se;
  Id *name;
  ExprNode *expr;
  std::string attr;

public:
  Id(SymbolEntry *_se) : se(_se){};
  Id(Id *_name, ExprNode *_expr) : name(_name), expr(_expr){};
  Id(Id *_name, std::string _attr) : name(_name), attr(_attr){};
  Type *getType() {
    if (se)
      return se->getType();
    else
      return name->getType();
  }
  SymbolEntry *getSymbolEntry() { return se; }
  Id *getId() { return name; }
  ExprNode *getExpr() { return expr; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class Constant : public ExprNode {
private:
  SymbolEntry *se;

public:
  Constant(SymbolEntry *_se) : se(_se){};
  Type *getType() { return se->getType(); }
  int evaluate() { return dynamic_cast<ConstantSymbolEntry*>(se)->getValue(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class FactorExpr : public ExprNode {
private:
  ExprNode *expr;
  int op;

public:
  enum {
    NOT,
    ABS,
  };
  FactorExpr(ExprNode *_expr, int _op) : expr(_expr), op(_op){};
  Type *getType() { return expr->getType(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class BinaryExpr : public ExprNode {
private:
  ExprNode *expr1, *expr2;
  Range *range;
  SymbolEntry *se;
  OpSignNode *sign;
  bool isUnary = false;
  bool isMember = false;

public:
  BinaryExpr(ExprNode *_expr1, ExprNode *_expr2, OpSignNode *_sign)
      : expr1(_expr1), expr2(_expr2), sign(_sign){};
  BinaryExpr(ExprNode *_expr1, OpSignNode *_sign) : expr1(_expr1), sign(_sign) {
    isUnary = true;
  };
  BinaryExpr(ExprNode *_expr1, Range *_range, OpSignNode *_sign)
      : expr1(_expr1), range(_range), sign(_sign) {
    isMember = true;
  };
  BinaryExpr(ExprNode *_expr1, SymbolEntry *_se, OpSignNode *_sign)
      : expr1(_expr1), se(_se), sign(_sign) {
    isMember = true;
  };
  Type *getType() { return expr1->getType(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class SeqNode : public StmtNode {
private:
  StmtNode *stmt1, *stmt2;

public:
  SeqNode(StmtNode *_stmt1, StmtNode *_stmt2) : stmt1(_stmt1), stmt2(_stmt2){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class DefId : public StmtNode {
private:
  IdentifierSymbolEntry *id;

public:
  DefId(IdentifierSymbolEntry *_id) : id(_id){};
  IdentifierSymbolEntry *getSymbolEntry() { return id; }
  Type *getType() { return id->getType(); }
  void setType(Type *_type) { id->setType(_type); }
  void setConst() { id->setConst(); }
  bool getConst() { return id->getConst(); }
  void setOffset(int _offset) { id->setOffset(_offset); }
  int getOffset() { return id->getOffset(); }
  void setIsArray() { id->setIsArray(); }
  bool getIsArray() { return id->getIsArray(); }
  std::string getName() { return id->dump(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class InitOptStmt : public StmtNode {
private:
  ExprNode *expr;

public:
  InitOptStmt(ExprNode *_expr) : expr(_expr){};
  ExprNode *getExpr() { return expr; }
  RustExpr *getRustExpr() { return expr->getRustExpr(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ParamNode : public StmtNode {
private:
  SymbolEntry *se;
  InitOptStmt *init;

public:
  ParamNode(SymbolEntry *_se, InitOptStmt *_init) : se(_se), init(_init) {}
  SymbolEntry *getParamSymbol() { return se; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ProcedureSpec : public StmtNode {
private:
  SymbolEntry *se;
  ParamNode *params;
  Type *returnType;

public:
  ProcedureSpec(SymbolEntry *_se, ParamNode *_params = nullptr, Type *_returnType = nullptr)
      : se(_se), params(_params), returnType(_returnType) {}
  SymbolEntry *getProcedureSymbol() { return se; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ProcedureDecl : public StmtNode {
private:
  ProcedureSpec *spec;

public:
  ProcedureDecl(ProcedureSpec *_spec) : spec(_spec) {}
  SymbolEntry *getProcedureSymbol() { return spec->getProcedureSymbol(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ObjectDeclStmt : public StmtNode {
private:
  DefId *id;
  InitOptStmt *init;
  Type *type;
  bool isConst = false;

public:
  ObjectDeclStmt(Type *_type, InitOptStmt *_init) : type(_type), init(_init) {}
  void setId(DefId *_id) { id = _id; }
  void setConst() { isConst = true; }
  bool getConst() { return isConst; }
  Type *getType() { return type; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class TypeDecl : public StmtNode {
  private:
    DefId *id;
    ExprNode *expr;
    SymbolEntry *se;
  public:
    TypeDecl(ExprNode *_expr, SymbolEntry *_se) : expr(_expr), se(_se){};
    TypeDecl(DefId *_id) : id(_id){};
    SymbolEntry *getSymbolEntry() { return se; }
    void dump(int level);
    void genRustCode(Node *parent);
};

class ArrayDecl : public StmtNode {
private:
  DefId *defids;
  SymbolEntry *se;
  ExprNode *expr;
public:
  ArrayDecl(SymbolEntry *_se, ExprNode *_expr) : se(_se), expr(_expr){};
  void setDefIds(DefId *_defids) { defids = _defids; }
  SymbolEntry *getSymbolEntry() { return se; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class ArrayInit : public ExprNode {
private:
  ExprNode *expr;
public:
  ArrayInit(ExprNode *_expr) : expr(_expr){};
  Type *getType() { return expr->getType(); }
  ExprNode *getExpr() { return expr; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class DeclStmt : public StmtNode {
private:
  ObjectDeclStmt *objectDecl;
  ProcedureDecl *procedureDecl;
  TypeDecl *typeDecl;
  ArrayDecl *arrayDecl;

public:
  DeclStmt(ObjectDeclStmt *_objectDecl) : objectDecl(_objectDecl) {}
  DeclStmt(ProcedureDecl *_procedureDecl) : procedureDecl(_procedureDecl) {}
  DeclStmt(TypeDecl *_typeDecl) : typeDecl(_typeDecl) {}
  DeclStmt(ArrayDecl *_arrayDecl) : arrayDecl(_arrayDecl) {}
  void dump(int level);
  void genRustCode(Node *parent);
};

class ArrayDef : public ExprNode {
  private:
    Range *range;
    Type *arraytype;
  public:
    ArrayDef(Range *_range, Type *_type) : range(_range), arraytype(_type){};
    Type *getType() { return arraytype; }
    int getOffset() { return dynamic_cast<Constant*>(range->getLowerbound())->evaluate(); }
    void dump(int level);
    void genRustCode(Node *parent);
};
  

class ProcedureDef;

class DeclItemOrBodyStmt : public StmtNode {
private:
  DeclStmt *decl;
  ProcedureDef *prof;

public:
  DeclItemOrBodyStmt(DeclStmt *_decl) : decl(_decl) {}
  DeclItemOrBodyStmt(ProcedureDef *_prof) : prof(_prof) {}
  void dump(int level);
  void genRustCode(Node *parent);
};

class PutStmt : public StmtNode {
  private:
    ExprNode *expr;
  public:
    PutStmt(ExprNode *_expr) : expr(_expr){};
    void dump(int level);
    void genRustCode(Node *parent);
  };
  
  class GetStmt : public StmtNode {
  private:
  IdentifierSymbolEntry *id;
  public:
    GetStmt(IdentifierSymbolEntry *_id) : id(_id){};
    void dump(int level);
    void genRustCode(Node *parent);
  };
  
  class PutlineStmt : public StmtNode {
  private:
    ExprNode *expr;
  public:
    PutlineStmt(ExprNode *_expr) : expr(_expr){}; 
    void dump(int level);
    void genRustCode(Node *parent);
  };

  
  class PackageCall : public StmtNode {
  private:
    std::string packageName;
  
  public:
    PackageCall(const char* _packageName) : packageName(_packageName) {}
    void dump(int level);
    void genRustCode(Node *parent);
  };

class NullStmt : public StmtNode {
public:
  NullStmt(){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class AssignStmt : public StmtNode {
private:
  SymbolEntry *se;
  ExprNode *expr;

public:
  AssignStmt(SymbolEntry *_se, ExprNode *_expr) : se(_se), expr(_expr){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class ReturnStmt : public StmtNode {
private:
  ExprNode *retValue;

public:
  ReturnStmt(ExprNode *_retValue = nullptr) : retValue(_retValue){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class CallStmt : public StmtNode {
private:
  Id *id;

public:
  CallStmt(Id *_id) : id(_id){};
  Id *getId() { return id->getId(); }
  ExprNode *getParam() { return id->getExpr(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class Stmt : public StmtNode {
private:
  StmtNode *stmt;

public:
  Stmt(StmtNode *_stmt) : stmt(_stmt){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class ProcedureDef : public StmtNode {
private:
  ProcedureSpec *spec;
  DeclItemOrBodyStmt *items;
  Stmt *stmts;
  ProcedureSpec *prev;

public:
  ProcedureDef(ProcedureSpec *_spec, DeclItemOrBodyStmt *_items = nullptr,
               Stmt *_stmts = nullptr, ProcedureSpec *_prev = nullptr)
      : spec(_spec), items(_items), stmts(_stmts), prev(_prev){};
  SymbolEntry *getProcedureSymbol() { return spec->getProcedureSymbol(); }
  void dump(int level);
  void genRustCode(Node *parent);
};

class CondClause : public StmtNode {
private:
  ExprNode *cond;
  Stmt *stmts;

public:
  CondClause(ExprNode *_cond, Stmt *_stmts) : cond(_cond), stmts(_stmts){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class IfStmt : public StmtNode {
private:
  CondClause *clause;
  Stmt *elsestmt;

public:
  IfStmt(CondClause *_clause, Stmt *_elsestmt)
      : clause(_clause), elsestmt(_elsestmt){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class DiscreteRange : public StmtNode {
private:
  SymbolEntry *se;
  Range *range;
  bool isArray = false;

public:
  DiscreteRange(SymbolEntry *_se, Range *_range = nullptr)
      : se(_se), range(_range){};
  DiscreteRange(Range *_range) : range(_range){};
  SymbolEntry *getSymbol() { return se; }
  void setIsArray() { isArray = true; }
  void dump(int level);
  void genRustCode(Node *parent);
};

class Choice : public StmtNode {
private:
  ExprNode *expr;
  DiscreteRange *discret;
  bool others = false;

public:
  Choice(ExprNode *_expr) : expr(_expr){};
  Choice(DiscreteRange *_discret) : discret(_discret){};
  Choice(bool _others) : others(_others){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class Alternative : public StmtNode {
private:
  Choice *choices;
  Stmt *stmts;

public:
  Alternative(Choice *_choices, Stmt *_stmts)
      : choices(_choices), stmts(_stmts){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class CaseStmt : public StmtNode {
private:
  ExprNode *expr;
  Alternative *alter;

public:
  CaseStmt(ExprNode *_expr, Alternative *_alter) : expr(_expr), alter(_alter){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class ExitStmt : public StmtNode {
private:
  ExprNode *cond;

public:
  ExitStmt(ExprNode *_cond) : cond(_cond){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class BasicLoopStmt : public StmtNode {
private:
  Stmt *stmts;

public:
  BasicLoopStmt(Stmt *_stmts) : stmts(_stmts){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class IterPart : public StmtNode {
private:
  SymbolEntry *se;

public:
  IterPart(SymbolEntry *_se) : se(_se){};
  void dump(int level);
  SymbolEntry *getSymbol() { return se; }
  void genRustCode(Node *parent);
};

class Iteration : public StmtNode {
private:
  IterPart *iter;
  OpSignNode *sign;
  DiscreteRange *range;

  ExprNode *cond;

public:
  Iteration(ExprNode *_cond) : cond(_cond){};
  Iteration(IterPart *_iter, OpSignNode *_sign, DiscreteRange *_range)
      : iter(_iter), sign(_sign), range(_range){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class LabelOpt : public StmtNode {
private:
  SymbolEntry *se;

public:
  LabelOpt(SymbolEntry *_se) : se(_se){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class LoopStmt : public StmtNode {
private:
  LabelOpt *label;
  Iteration *iter;
  BasicLoopStmt *loop;

public:
  LoopStmt(LabelOpt *_label, Iteration *_iter, BasicLoopStmt *_loop)
      : label(_label), iter(_iter), loop(_loop){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class Block : public StmtNode {
private:
  LabelOpt *label;
  DeclItemOrBodyStmt *decl;
  Stmt *stmts;

public:
  Block(LabelOpt *_label, DeclItemOrBodyStmt *_decl, Stmt *_stmts)
      : label(_label), decl(_decl), stmts(_stmts){};
  void dump(int level);
  void genRustCode(Node *parent);
};

class Ast {
private:
  Node *root;

public:
  Ast() { root = nullptr; }
  void setRoot(Node *n) { root = n; }
  void dump();
  void genRustCode(RustUnit *unit);
};

#endif