#include "Ast.h"
#include <cassert>

#define DEBUG_SWITCH_AST_LOG 0
#if DEBUG_SWITCH_AST_LOG
#define printAstLog(str) std::cerr << "[AST INFO]:" << str << "\n";
#else
#define printAstLog(str) //
#endif

extern FILE *yyout;
int Node::counter = 0;
RustBuilder *Node::builder = nullptr;
std::stack<LoopStmt *> loopIter;

Node::Node() { seq = counter++; }

void Node::setNext(Node *node) {
  Node *n = this;
  while (n->getNext()) {
    n = n->getNext();
  }
  if (n == this) {
    this->next = node;
  } else {
    n->setNext(node);
  }
}

void StmtNode::setNext(StmtNode *node) {
  StmtNode *n = this;
  while (n->getNext()) {
    n = n->getNext();
  }
  if (n == this) {
    this->next = node;
  } else {
    n->setNext(node);
  }
}

void OpSignNode::dump(int level) {
  std::string opSignName;
  switch (kind) {
  case OpSignNode::REVERSE:
    opSignName = "reverse";
    break;
  case OpSignNode::MUL:
    opSignName = "*";
    break;
  case OpSignNode::DIV:
    opSignName = "/";
    break;
  case OpSignNode::MOD:
    opSignName = "mod";
    break;
  case OpSignNode::REM:
    opSignName = "rem";
    break;
  case OpSignNode::ADD:
    opSignName = "+";
    break;
  case OpSignNode::SUB:
    opSignName = "-";
    break;
  case OpSignNode::SINGLEAND:
    opSignName = "&";
    break;
  case OpSignNode::IN:
    opSignName = "in";
    break;
  case OpSignNode::NOTIN:
    opSignName = "not in";
    break;
  case OpSignNode::EQ:
    opSignName = "=";
    break;
  case OpSignNode::NE:
    opSignName = "/=";
    break;
  case OpSignNode::LE:
    opSignName = "<";
    break;
  case OpSignNode::LTEQ:
    opSignName = "<=";
    break;
  case OpSignNode::GE:
    opSignName = ">";
    break;
  case OpSignNode::GTEQ:
    opSignName = ">=";
    break;
  case OpSignNode::ANDTHEN:
    opSignName = "and then";
    break;
  case OpSignNode::ORELSE:
    opSignName = "or else";
    break;
  case OpSignNode::AND:
    opSignName = "and";
    break;
  case OpSignNode::OR:
    opSignName = "or";
    break;
  case OpSignNode::XOR:
    opSignName = "xor";
    break;
  default:
    break;
  }
  fprintf(yyout, "%*cOpSign: %s\n", level, ' ', opSignName.c_str());
}

void OpSignNode::genRustCode(Node *parent) {}

void Id::dump(int level) {
  fprintf(yyout, "%*cId\n", level, ' ');
  if (name) {
    name->dump(level + 4);
    if (expr) {
      fprintf(yyout, "%*cName PAREN Value\n", level + 4, ' ');
      ExprNode *temp = expr;
      while (temp) {
        temp->dump(level + 8);
        temp = dynamic_cast<ExprNode *>(temp->getNext());
      }
    } else {
      fprintf(yyout, "%*cAttributeId: %s\n", level + 8, ' ', attr.c_str());
    }
  } else {
    std::string name, type;
    int scope;
    name = se->dump();
    type = se->getType()->dump();
    scope = dynamic_cast<IdentifierSymbolEntry *>(se)->getScope();
    fprintf(yyout, "%*cname: %s\tscope: %d\ttype: %s\n", level + 4, ' ',
            name.c_str(), scope, type.c_str());
  }
}

void Id::genRustCode(Node *parent) {
  if (name) {
    name->genRustCode(parent);
    RustId *id = dynamic_cast<RustId *>(name->getRustExpr());
    if (expr) {
      expr->genRustCode(parent);
      RustExpr *paramExpr = expr->getRustExpr();
      ExprNode *temp = dynamic_cast<ExprNode *>(expr->getNext());
      while (temp) {
        temp->genRustCode(parent);
        cExpr->setNext(temp->getRustExpr());
        temp = dynamic_cast<ExprNode *>(temp->getNext());
      }
      cExpr = new RustId(id, paramExpr);
    } else {
      cExpr = new RustId(id, attr);
    }
  } else {
    // for simple id
    cExpr = new RustId(se);
  }
}

void Constant::dump(int level) {
  printAstLog("Literal dump");
  std::string type, value;
  type = se->getType()->dump();
  value = se->dump();
  fprintf(yyout, "%*cLiteral\ttype: %s\tvalue: %s\n", level, ' ', type.c_str(),
          value.c_str());
}

void Constant::genRustCode(Node *parent) { cExpr = new RustConstant(se); }

void FactorExpr::dump(int level) {
  std::string opName;
  switch (op) {
  case FactorExpr::NOT:
    opName = "not";
    break;
  case FactorExpr::ABS:
    opName = "abs";
    break;
  default:
    break;
  }
  fprintf(yyout, "%*cFactorExpr\top: %s\n", level, ' ', opName.c_str());
  expr->dump(level + 4);
}

void FactorExpr::genRustCode(Node *parent) {
  expr->genRustCode(parent);
  cExpr = new RustFactor(expr->getRustExpr(), op);
}

void BinaryExpr::dump(int level) {
  fprintf(yyout, "%*cBinaryExpr\n", level, ' ');
  sign->dump(level + 4);
  expr1->dump(level + 8);
  if (isUnary) {
    return;
  } else if (isMember) {
    if (range)
      range->dump(level + 8);
    if (se)
      se->dump();
  } else {
    expr2->dump(level + 8);
  }
}

void BinaryExpr::genRustCode(Node *parent) {
  int rustOp;
  switch (sign->getKind()) {
  case OpSignNode::MUL:
    rustOp = RustBinaryExpr::MUL;
    break;
  case OpSignNode::DIV:
    rustOp = RustBinaryExpr::DIV;
    break;
  case OpSignNode::MOD:
    rustOp = RustBinaryExpr::MOD;
    break;
  case OpSignNode::REM:
    rustOp = RustBinaryExpr::REM;
    break;
  case OpSignNode::ADD:
    rustOp = RustBinaryExpr::ADD;
    break;
  case OpSignNode::SUB:
    rustOp = RustBinaryExpr::SUB;
    break;
  case OpSignNode::SINGLEAND:
    rustOp = RustBinaryExpr::SINGLEAND;
    break;
  case OpSignNode::IN:
    rustOp = RustBinaryExpr::IN;
    break;
  case OpSignNode::NOTIN:
    rustOp = RustBinaryExpr::NOTIN;
    break;
  case OpSignNode::EQ:
    rustOp = RustBinaryExpr::EQ;
    break;
  case OpSignNode::NE:
    rustOp = RustBinaryExpr::NE;
    break;
  case OpSignNode::LE:
    rustOp = RustBinaryExpr::LE;
    break;
  case OpSignNode::LTEQ:
    rustOp = RustBinaryExpr::LTEQ;
    break;
  case OpSignNode::GE:
    rustOp = RustBinaryExpr::GE;
    break;
  case OpSignNode::GTEQ:
    rustOp = RustBinaryExpr::GTEQ;
    break;
  case OpSignNode::ANDTHEN:
    rustOp = RustBinaryExpr::ANDTHEN;
    break;
  case OpSignNode::ORELSE:
    rustOp = RustBinaryExpr::ORELSE;
    break;
  case OpSignNode::AND:
    rustOp = RustBinaryExpr::AND;
    break;
  case OpSignNode::OR:
    rustOp = RustBinaryExpr::OR;
    break;
  case OpSignNode::XOR:
    rustOp = RustBinaryExpr::XOR;
    break;
  case OpSignNode::EXPON:
    rustOp = RustBinaryExpr::EXPON;
    break;
  default:
    break;
  }
  if (isUnary) {
    expr1->genRustCode(parent);
    cExpr = new RustBinaryExpr(expr1->getRustExpr(), rustOp);
  } else if (isMember) {
    if (range) {
      expr1->genRustCode(parent);
      range->genRustCode(parent);
      cExpr = new RustBinaryExpr(expr1->getRustExpr(),
                                dynamic_cast<RustRange *>(range->getRustStmt()),
                                rustOp);
    }
    if (se) {
      expr1->genRustCode(parent);
      cExpr = new RustBinaryExpr(expr1->getRustExpr(), se, rustOp);
    }
  } else {
    expr1->genRustCode(parent);
    expr2->genRustCode(parent);
    cExpr = new RustBinaryExpr(expr1->getRustExpr(), expr2->getRustExpr(), rustOp);
  }
}

void SeqNode::dump(int level) {
  stmt1->dump(level);
  stmt2->dump(level);
}

void SeqNode::genRustCode(Node *parent) {
  stmt1->genRustCode(parent);
  stmt2->genRustCode(parent);
}

void DefId::dump(int level) {
  std::string name, type;
  name = id->dump();
  type = id->getType()->dump();
  std::string isConst = "false";
  if(id->getConst()) {
    isConst = "true";
  }
  fprintf(yyout, "%*cDefId\tname: %s\ttype: %s\tisConst: %s\n", level, ' ', name.c_str(),
          type.c_str(), isConst.c_str());
  if (this->getNext())
    this->getNext()->dump(level);
}

void DefId::genRustCode(Node *parent) {}

void InitOptStmt::dump(int level) {
  fprintf(yyout, "%*cInitOptStmt\n", level, ' ');
  expr->dump(level + 4);
}

void InitOptStmt::genRustCode(Node *parent) { expr->genRustCode(parent); }

void ParamNode::dump(int level) {
  std::string name, type;
  name = se->dump();
  type = se->getType()->dump();
  fprintf(yyout, "%*cParam\tname: %s\ttype: %s\n", level, ' ', name.c_str(),
          type.c_str());
  if (init)
    init->dump(level + 4);
  if (this->getNext())
    this->getNext()->dump(level);
}

void ParamNode::genRustCode(Node *parent) {}

void ProcedureSpec::dump(int level) {
  printAstLog("ProcedureSpec dump");
  std::string name, type;
  name = se->dump();
  type = se->getType()->dump();
  fprintf(yyout, "%*cProcedure\tname: %s\ttype: %s\n", level, ' ', name.c_str(),
          type.c_str());
  if (params)
    params->dump(level + 4);
}

void ProcedureSpec::genRustCode(Node *parent) {}

void ProcedureDecl::dump(int level) {
  fprintf(yyout, "%*cProcedureDecl\n", level, ' ');
  spec->dump(level + 4);
}

void ProcedureDecl::genRustCode(Node *parent) {
  Function *curFunc = builder->getCurrFunc();
  rustStmt = new RustFuncDecl(curFunc, getProcedureSymbol());
}

void ObjectDeclStmt::dump(int level) {
  printAstLog("ObjectDeclStmt dump");
  fprintf(yyout, "%*cObjectDeclStmt\n", level, ' ');
  id->dump(level + 4);
  if (init)
    init->dump(level + 4);
}

void ObjectDeclStmt::genRustCode(Node *parent) {
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *func = builder->getCurrFunc();
    RustUnit *unit = builder->getUnit();
    // Init Var
    RustExpr *initExpr = nullptr;
    if (init) {
      init->genRustCode(parent);
      initExpr = init->getRustExpr();
    }
    // Declared objects
    DefId *temp = id;
    while (temp) {
      Operand *op =
          new Operand(temp->getSymbolEntry(), temp->getType(), initExpr);
      func->addDeclOps(op);
      unit->insertOp(func, op);
      temp = dynamic_cast<DefId *>(temp->getNext());
    }
  } else {
    // declarations in main function
    RustBlockStmt *block = dynamic_cast<RustBlockStmt *>(
        dynamic_cast<StmtNode *>(parent)->getRustStmt());
    RustExpr *initExpr = nullptr;
    if (init) {
      init->genRustCode(parent);
      initExpr = init->getRustExpr();
    }
    // Declared objects
    DefId *temp = id;
    while (temp) {
      Operand *op =
          new Operand(temp->getSymbolEntry(), temp->getType(), temp->getConst() ,initExpr);
      block->addOps(op);
      temp = dynamic_cast<DefId *>(temp->getNext());
    }
  }
}

void DeclStmt::dump(int level) {
  fprintf(yyout, "%*cDeclStmt\n", level, ' ');
  if (objectDecl)
    objectDecl->dump(level + 4);
  if (procedureDecl)
    procedureDecl->dump(level + 4);
}

void DeclStmt::genRustCode(Node *parent) {
  if (objectDecl) {
    objectDecl->genRustCode(parent);
    rustStmt = objectDecl->getRustStmt();
  }
  if (procedureDecl) {
    procedureDecl->genRustCode(parent);
    rustStmt = procedureDecl->getRustStmt();
  }
}

void DeclItemOrBodyStmt::dump(int level) {
  fprintf(yyout, "%*cDeclItemOrBodyStmt\n", level, ' ');
  if (decl)
    decl->dump(level + 4);
  if (prof)
    prof->dump(level + 4);
  if (this->getNext())
    this->getNext()->dump(level);
}

void DeclItemOrBodyStmt::genRustCode(Node *parent) {
  if (decl) {
    decl->genRustCode(parent);
    rustStmt = decl->getRustStmt();
  }
  if (prof) {
    prof->genRustCode(parent);
  }
  if (this->getNext())
    this->getNext()->genRustCode(parent);
}

void NullStmt::dump(int level) { fprintf(yyout, "%*cNullStmt\n", level, ' '); }

void NullStmt::genRustCode(Node *parent) {
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt = new RustDummyStmt(curFunc);
  } else {
    rustStmt = new RustDummyStmt();
  }
}

void AssignStmt::dump(int level) {
  printAstLog("AssignStmt dump");
  std::string name, type;
  name = se->dump();
  type = se->getType()->dump();
  fprintf(yyout, "%*cAssignStmt\tname: %s\ttype: %s\n", level, ' ',
          name.c_str(), type.c_str());
  expr->dump(level + 4);
}

void AssignStmt::genRustCode(Node *parent) {
  expr->genRustCode(parent);
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *func = builder->getCurrFunc();
    rustStmt = new RustAssignStmt(func, se, expr->getRustExpr());
  } else {
    rustStmt = new RustAssignStmt(nullptr, se, expr->getRustExpr());
  }
}

void ReturnStmt::dump(int level) {
  fprintf(yyout, "%*cReturnStmt\n", level, ' ');
  if (retValue)
    retValue->dump(level + 4);
  else
    fprintf(yyout, "%*cvoid\n", level + 4, ' ');
}

void ReturnStmt::genRustCode(Node *parent) {}

void CallStmt::dump(int level) {
  fprintf(yyout, "%*cCallStmt\n", level, ' ');
  id->dump(level + 4);
}

void CallStmt::genRustCode(Node *parent) {
  id->genRustCode(parent);
  RustId *cId = dynamic_cast<RustId *>(id->getRustExpr());
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt = new RustCallStmt(curFunc, cId);
  } else {
    rustStmt = new RustCallStmt(nullptr, cId);
  }
}

void Stmt::dump(int level) {
  fprintf(yyout, "%*cStmt\n", level, ' ');
  if (stmt)
    stmt->dump(level + 4);
  if (this->getNext())
    this->getNext()->dump(level);
}

void Stmt::genRustCode(Node *parent) {
  stmt->genRustCode(this);
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt = new RustSeqStmt(curFunc, stmt->getRustStmt());
  } else {
    rustStmt = new RustSeqStmt(nullptr, stmt->getRustStmt());
  }
  if (this->getNext()) {
    this->getNext()->genRustCode(this);
    rustStmt->setNext(this->getNext()->getRustStmt());
  }
}

void ProcedureDef::dump(int level) {
  printAstLog("ProcedureDef dump");
  fprintf(yyout, "%*cProcedureDef\n", level, ' ');
  spec->dump(level + 4);
  if (items)
    items->dump(level + 4);
  if (stmts)
    stmts->dump(level + 4);
}

void ProcedureDef::genRustCode(Node *parent) {
  SymbolEntry *se = spec->getProcedureSymbol();
  RustUnit *unit = builder->getUnit();
  Function *curFunc;
  if (prev) {
    SymbolEntry *prevSe = prev->getProcedureSymbol();
    // Fix: subsubfunction can't get subfunction
    Function *prevFunc = unit->getFunction(prevSe);
    curFunc = new Function(prevFunc, se);
  } else {
    curFunc = new Function(unit, se);
  }
  builder->setCurrFunc(curFunc);
  spec->genRustCode(this);
  if (items)
    items->genRustCode(this);
  if (stmts)
    stmts->genRustCode(this);
  builder->removeCurrFunc();
}

void CondClause::dump(int level) {
  fprintf(yyout, "%*cCondClause\n", level, ' ');
  cond->dump(level + 4);
  stmts->dump(level + 4);
  if (this->getNext())
    this->getNext()->dump(level);
}

void CondClause::genRustCode(Node *parent) {
  cond->genRustCode(parent);
  stmts->genRustCode(this);
  rustStmt = new RustCondClause(nullptr, cond->getRustExpr(),
                            dynamic_cast<RustSeqStmt *>(stmts->getRustStmt()));
  if (this->getNext()) {
    this->getNext()->genRustCode(this);
    rustStmt->setNext(this->getNext()->getRustStmt());
  }
}

void IfStmt::dump(int level) {
  fprintf(yyout, "%*cIfStmt\n", level, ' ');
  clause->dump(level + 4);
  if (elsestmt) {
    fprintf(yyout, "%*cElse\n", level + 4, ' ');
    elsestmt->dump(level + 8);
  }
}

void IfStmt::genRustCode(Node *parent) {
  clause->genRustCode(this);
  RustCondClause *cClause = dynamic_cast<RustCondClause *>(clause->getRustStmt());
  RustSeqStmt *cElseStmt = nullptr;
  if (elsestmt) {
    elsestmt->genRustCode(this);
    cElseStmt = dynamic_cast<RustSeqStmt *>(elsestmt->getRustStmt());
  }
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt = new RustIfStmt(curFunc, cClause, cElseStmt);
  } else {
    rustStmt = new RustIfStmt(nullptr, cClause, cElseStmt);
  }
}

void PutStmt::dump(int level) {
  fprintf(yyout, "%*cPutStmt\n", level, ' ');
  expr->dump(level + 4);
}

void PutStmt::genRustCode(Node *parent) {
  expr->genRustCode(parent);
  rustStmt = new RustPutStmt(expr->getRustExpr());
}

void GetStmt::dump(int level) {
  fprintf(yyout, "%*cGetStmt\n", level, ' ');
  cout << str << endl;
}

void GetStmt::genRustCode(Node *parent) {
  rustStmt = new RustGetStmt(str);
}

void PutlineStmt::dump(int level) {
  fprintf(yyout, "%*cPutLineStmt\n", level, ' ');
  if (expr)
    expr->dump(level + 4);
  if (str != "")
    fprintf(yyout, "%*cString: %s\n", level + 4, ' ', str.c_str());
}

void PutlineStmt::genRustCode(Node *parent) {
  if (expr) {
    expr->genRustCode(parent);
    rustStmt = new RustPutLineStmt(expr->getRustExpr());
  } else {
    rustStmt = new RustPutLineStmt(str);
  }
}

void PackageCall::dump(int level) {
  fprintf(yyout, "%*cRange: %s\n", level, ' ', packageName.c_str());
}

void PackageCall::genRustCode(Node *parent) {
  rustStmt = new RustPackageCall(packageName);
}

void Range::dump(int level) {
  fprintf(yyout, "%*cRange\n", level, ' ');
  lowerbound->dump(level + 4);
  upperbound->dump(level + 4);
}

void Range::genRustCode(Node *parent) {
  lowerbound->genRustCode(parent);
  upperbound->genRustCode(parent);
  rustStmt = new RustRange(lowerbound->getRustExpr(), upperbound->getRustExpr());
}

void DiscreteRange::dump(int level) {
  if (se) {
    std::string name, type;
    name = se->dump();
    type = se->getType()->dump();
    fprintf(yyout, "%*cDiscreteRange\tname: %s\ttype: %s\n", level, ' ',
            name.c_str(), type.c_str());
    if (range)
      range->dump(level + 4);
  } else {
    fprintf(yyout, "%*cDiscreteRange\n", level, ' ');
    range->dump(level + 4);
  }
}

void DiscreteRange::genRustCode(Node *parent) {
  range->genRustCode(parent);
  rustStmt = range->getRustStmt();
}

void Choice::dump(int level) {
  fprintf(yyout, "%*cChoice\n", level, ' ');
  if (expr)
    expr->dump(level + 4);
  if (discret)
    discret->dump(level + 4);
  if (others) {
    fprintf(yyout, "%*cothers\n", level + 4, ' ');
  }
  if (this->getNext()) {
    fprintf(yyout, "%*cOR\n", level, ' ');
    this->getNext()->dump(level);
  }
}

void Choice::genRustCode(Node *parent) {
  if (expr) {
    expr->genRustCode(parent);
    rustStmt = new RustChoice(dynamic_cast<RustExpr *>(expr->getRustExpr()));
  }
  if (discret) {
    discret->genRustCode(parent);
    rustStmt = new RustChoice(dynamic_cast<RustRange *>(discret->getRustStmt()));
  }
  if (others) {
    rustStmt = new RustChoice(true);
  }
  if (this->getNext()) {
    this->getNext()->genRustCode(parent);
    rustStmt->setNext(this->getNext()->getRustStmt());
  }
}

void Alternative::dump(int level) {
  fprintf(yyout, "%*cAlternative\n", level, ' ');
  choices->dump(level + 4);
  stmts->dump(level + 4);
  if (this->getNext())
    this->getNext()->dump(level);
}

void Alternative::genRustCode(Node *parent) {
  choices->genRustCode(parent);
  stmts->genRustCode(parent);
  rustStmt = new RustAlternative(dynamic_cast<RustChoice *>(choices->getRustStmt()),
                             dynamic_cast<RustSeqStmt *>(stmts->getRustStmt()));
  if (this->getNext()) {
    this->getNext()->genRustCode(parent);
    rustStmt->setNext(this->getNext()->getRustStmt());
  }
}

void CaseStmt::dump(int level) {
  fprintf(yyout, "%*cCaseStmt\n", level, ' ');
  expr->dump(level + 4);
  if (alter)
    alter->dump(level + 4);
}

void CaseStmt::genRustCode(Node *parent) {
  expr->genRustCode(parent);
  alter->genRustCode(parent);
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt =
        new RustCaseStmt(curFunc, expr->getRustExpr(),
                        dynamic_cast<RustAlternative *>(alter->getRustStmt()));
  } else {
    rustStmt =
        new RustCaseStmt(nullptr, expr->getRustExpr(),
                        dynamic_cast<RustAlternative *>(alter->getRustStmt()));
  }
}

void ExitStmt::dump(int level) {
  fprintf(yyout, "%*cExitStmt\n", level, ' ');
  if (cond)
    cond->dump(level + 4);
}

void ExitStmt::genRustCode(Node *parent) {
  if (cond) {
    cond->genRustCode(parent);
    rustStmt = new RustExitStmt(cond->getRustExpr());
  } else {
    rustStmt = new RustExitStmt();
  }
}

void BasicLoopStmt::dump(int level) {
  fprintf(yyout, "%*cBasicLoopStmt\n", level, ' ');
  stmts->dump(level + 4);
}

void BasicLoopStmt::genRustCode(Node *parent) {
  stmts->genRustCode(parent);
  rustStmt = stmts->getRustStmt();
}

void IterPart::dump(int level) {
  std::string name;
  name = se->dump();
  fprintf(yyout, "%*cIterPart\tname: %s\n", level, ' ', name.c_str());
}

void IterPart::genRustCode(Node *parent) {}

void Iteration::dump(int level) {
  fprintf(yyout, "%*cIteration\n", level, ' ');
  if (cond) {
    cond->dump(level + 4);
  } else {
    iter->dump(level + 4);
    if (sign)
      sign->dump(level + 4);
    range->dump(level + 4);
  }
}

void Iteration::genRustCode(Node *parent) {
  if (iter) {
    iter->genRustCode(parent);
    range->genRustCode(parent);
    bool reverse = false;
    if (sign)
      reverse = true;
    rustStmt = new RustIteration(iter->getSymbol(),
                             dynamic_cast<RustRange *>(range->getRustStmt()),
                             reverse);
  } else {
    cond->genRustCode(parent);
    rustStmt = new RustIteration(cond->getRustExpr());
  }
}

void LabelOpt::dump(int level) {
  std::string name;
  name = se->dump();
  fprintf(yyout, "%*cIterPart\tname: %s\n", level, ' ', name.c_str());
}

void LabelOpt::genRustCode(Node *parent) {}

void LoopStmt::dump(int level) {
  fprintf(yyout, "%*cLoopStmt\n", level, ' ');
  if (label)
    label->dump(level + 4);
  if (iter)
    iter->dump(level + 4);
  loop->dump(level + 4);
}

void LoopStmt::genRustCode(Node *parent) {
  loopIter.push(this);
  RustIteration *cIter = nullptr;
  if (iter) {
    iter->genRustCode(this);
    cIter = dynamic_cast<RustIteration *>(iter->getRustStmt());
  }
  loop->genRustCode(this);

  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *curFunc = builder->getCurrFunc();
    rustStmt = new RustLoopStmt(curFunc, cIter,
                            dynamic_cast<RustSeqStmt *>(loop->getRustStmt()));
  } else {
    rustStmt = new RustLoopStmt(nullptr, cIter,
                            dynamic_cast<RustSeqStmt *>(loop->getRustStmt()));
  }
  loopIter.pop();
}

void Block::dump(int level) {
  fprintf(yyout, "%*cBlockStmt\n", level, ' ');
  if (label)
    label->dump(level + 4);
  decl->dump(level + 4);
  stmts->dump(level + 4);
}

void Block::genRustCode(Node *parent) {
  stmts->genRustCode(this);
  if (dynamic_cast<ProcedureDef *>(parent)) {
    Function *func = builder->getCurrFunc();
    rustStmt =
        new RustBlockStmt(func, dynamic_cast<RustSeqStmt *>(stmts->getRustStmt()));
  } else {
    rustStmt = new RustBlockStmt(nullptr,
                             dynamic_cast<RustSeqStmt *>(stmts->getRustStmt()));
  }
  decl->genRustCode(this);
}

void Ast::dump() {
  printAstLog("Program dump");
  fprintf(yyout, "program\n");
  if (root != nullptr)
    root->dump(4);
}

void Ast::genRustCode(RustUnit *unit) {
  RustBuilder *builder = new RustBuilder(unit);
  Node::setRustBuilder(builder);
  root->genRustCode(nullptr);
}