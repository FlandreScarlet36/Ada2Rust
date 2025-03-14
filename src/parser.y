%code top{
    #include <cstring>
    #include <stack>
    #include <vector>
    #include <iostream>
    #include <assert.h>
    #include <algorithm>
    #include "parser.h"
    extern int yylineno;
    extern char* yytext;
    extern Ast ast;

    std::vector<bool> whileIters;
    std::vector<ProcedureSpec*> procedureIters;

    #define DEBUG_SWITCH_TYPE_CHECK 0
    #if DEBUG_SWITCH_TYPE_CHECK
    #define DEBUG_YACC(str) std::cerr<<"[YACC INFO]:"<<str<<"\n";
    #else
    #define DEBUG_YACC(str) //
    #endif

    int yylex();
    int yyerror(char const*);
}

%code requires {
    #include "SymbolTable.h"
    #include "Ast.h"
}

%union {
    char* StrType;
    char CharType;
    int IntType;
    float FloatType;
    StmtNode* StmtType;
    ExprNode* ExprType;
    OpSignNode* SignType;
    Type* type;
    PackageCall* packageCall;
}

%start Program
%token TIC
%token ONEDOT
%token DOTDOT
%token LTLT
%token BOX
%token LTEQ
%token GTEQ
%token EXPON
%token NE
%token GTGT
%token GE
%token LE
%token EQ
%token ASSIGN
%token RIGHTSHAFT
%token ABORT
%token ABS
%token ABSTRACT
%token ACCEPT
%token ACCESS
%token ALIASED
%token ALL
%token AND
%token ARRAY
%token AT
%token BEGiN
%token BODY
%token CASE
%token CONSTANT
%token DECLARE
%token DELAY
%token DELTA
%token DIGITS
%token DO
%token ELSE
%token ELSIF
%token END
%token ENTRY
%token EXCEPTION
%token EXIT
%token FOR
%token FUNCTION
%token GENERIC
%token GOTO
%token IF
%token IN
%token IS
%token LIMITED
%token LOOP
%token MUL
%token DIV
%token MOD
%token NEW
%token NOT
%token SUB
%token ADD
%token NuLL
%token OF
%token OR
%token OTHERS
%token OUT
%token PACKAGE
%token PRAGMA
%token PRIVATE
%token PROCEDURE
%token PROTECTED
%token RAISE
%token RANGE
%token RECORD
%token REM
%token RENAMES
%token REQUEUE
%token RETURN
%token REVERSE
%token SELECT
%token SEPARATE
%token SUBTYPE
%token TAGGED
%token TASK
%token TERMINATE
%token THEN
%token TYPE
%token UNTIL
%token USE
%token WHEN
%token WHILE
%token WITH
%token XOR
%token PUT_LINE
%token PUT
%token GET
%token <BoolType> TRuE FALsE
%token <IntType> DECIMAL
%token <FloatType> FLOATNUM
%token <CharType> SINGLECHAR
%token <StrType> Identifier STRINGLITERAL PACKAGEID
%token INTEGER STRING NATURAL BOOLEAN CHARACTER FLOAT
%token COLON SEMICOLON LPAREN RPAREN COMMA
%token SINGLEAND SINGLEOR

%type<StmtType> CompUnit Unit PackageCall SubprogDecl SubprogBody SubprogSpec FormalPartOpt FormalPart Params Param DefIds DefId InitOpt DeclPart DeclItemOrBody DeclItemOrBodys DeclType TypeDecl Decl Statements Statement PutStmt PutlineStmt GetStmt SimpleStmt CompoundStmt NullStmt AssignStmt ReturnStmt ProcedureCall ExitStmt IfStmt CaseStmt LoopStmt Iteration IterPart LabelOpt Block CondClause CondClauses ElseOpt Range RangeConstrOpt DiscreteRange DiscreteWithRange Choice Choices Alternative Alternatives BasicLoop BlockBody BlockDecl
%type<type> Type
%type<StrType> AttributeId
%type<ExprType> Expression Condition CondPart IdOpt WhenOpt Literal Primary Factor Term SimpleExpression Relation Attribute Value Values IndexedComp Name ArrayDef ArrayInit
%type<SignType> ReverseOpt Multiplying Adding Unary Membership Relational ShortCircuit Logical

%%

Program
    : CompUnit {
        ast.setRoot($1);
    }
    ;

CompUnit
    : Unit {
        $$ = $1;
    }
    | CompUnit Unit {
        $$ = new SeqNode($1, $2);
    }
    ;

Unit
    : SubprogDecl {
        $$ = $1;
    }
	| SubprogBody {
        $$ = $1;
    }
    | PackageCall {
        $$ = $1;
    }
    ;


PackageCall
    : WITH PACKAGEID SEMICOLON {
        DEBUG_YACC("================Enter PackageCall=================");
        $$ = new PackageCall($2);
        DEBUG_YACC("================Leave PackageCall=================");
    }
    | USE PACKAGEID SEMICOLON {
        DEBUG_YACC("================Enter PackageCall=================");
        $$ = new PackageCall($2);
        DEBUG_YACC("================Leave PackageCall=================");
    }
    ;

SubprogDecl
    : SubprogSpec SEMICOLON {
        DEBUG_YACC("================Enter SubprogDecl=================");
        $$ = new ProcedureDecl(dynamic_cast<ProcedureSpec*>($1));

        SymbolTable* ScopeTable = identifiers;
        identifiers = identifiers->getPrev();
        delete ScopeTable;
        DEBUG_YACC("================Leave SubprogDecl=================");
    }
    ;

SubprogSpec
    : PROCEDURE Identifier {
        DEBUG_YACC("================Enter SubprogSpec=================");
        // Register procedure name into symbol table.
        Type* proType = new ProcedureType();
        SymbolEntry *se = identifiers->lookup($2);
        if(!se) {
            se = new IdentifierSymbolEntry(proType, $2, identifiers->getLevel());
            identifiers->install($2, se);
        }
        identifiers = new SymbolTable(identifiers);
    } FormalPartOpt {
        SymbolEntry *se = identifiers->lookup($2);
        ProcedureType* proType = dynamic_cast<ProcedureType*>(se->getType());
        // Define procedure type.
        ParamNode* param = nullptr;
        if($4) {
            param = dynamic_cast<ParamNode*>($4);
            std::vector<Type*> paramTypes;
            std::vector<SymbolEntry*> paramIds;
            while (param) {
                SymbolEntry* paramSe = param->getParamSymbol();
                paramTypes.push_back(paramSe->getType());
                paramIds.push_back(paramSe);
                param = dynamic_cast<ParamNode*>(param->getNext());
            }
            proType->setParams(paramTypes, paramIds);
        }
        // Define SubprogSpec with ast node.
        $$ = new ProcedureSpec(se, param);
        DEBUG_YACC("================Leave SubprogSpec=================");
    }
    | FUNCTION Identifier {
        DEBUG_YACC("================Enter SubprogSpec=================");
        // Register procedure name into symbol table.
        Type* proType = new ProcedureType();
        SymbolEntry *se = identifiers->lookup($2);
        if(!se) {
            se = new IdentifierSymbolEntry(proType, $2, identifiers->getLevel());
            identifiers->install($2, se);
        }
        identifiers = new SymbolTable(identifiers);
    } FormalPartOpt RETURN Type{
        SymbolEntry *se = identifiers->lookup($2);
        ProcedureType* proType = dynamic_cast<ProcedureType*>(se->getType());
        // Define procedure type.
        ParamNode* param = nullptr;
        if($4) {
            param = dynamic_cast<ParamNode*>($4);
            std::vector<Type*> paramTypes;
            std::vector<SymbolEntry*> paramIds;
            while (param) {
                SymbolEntry* paramSe = param->getParamSymbol();
                paramTypes.push_back(paramSe->getType());
                paramIds.push_back(paramSe);
                param = dynamic_cast<ParamNode*>(param->getNext());
            }
            proType->setParams(paramTypes, paramIds);
        }
        if($6)
        proType->setReturnType($6);
        // Define SubprogSpec with ast node.
        $$ = new ProcedureSpec(se, param);
        DEBUG_YACC("================Leave SubprogSpec=================");
    }
    ;

FormalPartOpt
    : %empty { $$ = nullptr; }
	| FormalPart {
        $$ = $1;
    }
	;

FormalPart
    : LPAREN Params RPAREN {
        $$ = $2;
    }
    ;

Params
    : Param {
        $$ = $1;
    }
	| Params SEMICOLON Param {
        $$ = $1;
        $1->setNext($3);
    }
	;

Param : Identifier COLON Type InitOpt {
        SymbolEntry *se = new IdentifierSymbolEntry($3, $1, IdentifierSymbolEntry::PARAM);
        identifiers->install($1, se);
        $$ = new ParamNode(se, dynamic_cast<InitOptStmt*>($4));
    }
	;

Type
    : INTEGER {
        $$ = TypeSystem::integerType;
    }
    | BOOLEAN {
        $$ = TypeSystem::boolType;
    }
    | CHARACTER {
         $$ = TypeSystem::characterType;
    }
    | FLOAT {
        $$ = TypeSystem::floatType;
    }
    | STRING {
        $$ = TypeSystem::stringType;
    }
    | NATURAL {
        $$ = TypeSystem::naturalType;
    }
    ;

InitOpt : %empty { $$ = nullptr; }
	| ASSIGN Expression {
        $$ = new InitOptStmt($2);
    }
	;

SubprogBody
    : SubprogSpec IS {
        DEBUG_YACC("================Enter SubprogBody=================");
        // Enter into new scope.
        identifiers = new SymbolTable(identifiers);
        procedureIters.push_back(dynamic_cast<ProcedureSpec*>($1));
    } DeclPart BlockBody END IdOpt SEMICOLON {
        procedureIters.pop_back();
        ProcedureSpec* prev = procedureIters.empty()? nullptr : procedureIters.back();
        $$ = new ProcedureDef(dynamic_cast<ProcedureSpec*>($1), dynamic_cast<DeclItemOrBodyStmt*>($4), dynamic_cast<Stmt*>($5), prev);
        // Leave the scope.
        SymbolTable* ScopeTable = identifiers;
        SymbolTable* PrevTable = identifiers->getPrev();
        identifiers = PrevTable->getPrev();
        delete ScopeTable;
        delete PrevTable;
        DEBUG_YACC("================Leave SubprogBody=================");
    }
	;

DeclPart :%empty { $$ = nullptr; }
	| DeclItemOrBodys {
        $$ = $1;
    }
	;

Decl
    : DefIds COLON DeclType SEMICOLON {
        if (dynamic_cast<ObjectDeclStmt*>($3)) {
            ObjectDeclStmt* decl = dynamic_cast<ObjectDeclStmt*>($3);
            Type *elementtype = decl->getType();
            DefId* id = dynamic_cast<DefId*>($1);
            while(id) {
                id->setType(elementtype);
                if(decl->getConst())
                    id->setConst();
                id = dynamic_cast<DefId*>(id->getNext());
            }
            decl->setId(dynamic_cast<DefId*>($1));
            $$ = new DeclStmt(dynamic_cast<ObjectDeclStmt*>($3));
        } 
        else if (dynamic_cast<ArrayDecl*>($3)) {
            ArrayDecl* arraydecl = dynamic_cast<ArrayDecl*>($3);
            // 数组元素的类型
            SymbolEntry *se = arraydecl->getSymbolEntry();
            Type *elementtype = dynamic_cast<IdentifierSymbolEntry*>(se)->getType();
            int offset = dynamic_cast<IdentifierSymbolEntry*>(se)->getOffset();
            DefId* id = dynamic_cast<DefId*>($1);
            while(id) {
                id->setType(elementtype);
                id->setOffset(offset);
                id->setIsArray();
                id = dynamic_cast<DefId*>(id->getNext());
            }
            arraydecl->setDefIds(dynamic_cast<DefId*>($1));
            $$ = new DeclStmt(arraydecl);
        } else {
            yyerror("Unknown DeclType");
        }
    }
    | SubprogDecl {
        // $$ = new DeclStmt(dynamic_cast<ProcedureDecl*>($1));
    }
    | TypeDecl {
        $$ = new DeclStmt(dynamic_cast<TypeDecl*>($1));
    }
    ;

TypeDecl
    : TYPE Identifier IS ArrayDef SEMICOLON{
        ArrayDef *arraydef = dynamic_cast<ArrayDef *>($4);
        // 数组元素的类型
        Type *arraytype = arraydef->getType();
        // 数组第一个下标相对于0的偏移量
        int offset = arraydef->getOffset();
        SymbolEntry *se = new IdentifierSymbolEntry(arraytype, $2, identifiers->getLevel());
        dynamic_cast<IdentifierSymbolEntry *>(se)->setOffset(offset);
        identifiers->install($2, se);
        $$ = new TypeDecl($4, se);
    }
    | TYPE Identifier IS LPAREN DefIds RPAREN SEMICOLON{
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, $2, identifiers->getLevel());
        DefId* id = dynamic_cast<DefId*>($5);
        int count = 0; // 添加计数器
        while(id) {
            id->setType(TypeSystem::enumType);
            id = dynamic_cast<DefId*>(id->getNext());
            count++;
        }
        dynamic_cast<IdentifierSymbolEntry *>(se)->setOffset(count);
        identifiers->install($2, se);
        $$ = new TypeDecl(dynamic_cast<DefId*>($5));
    }
    ;

ArrayDef
    : ARRAY LPAREN Range RPAREN OF Type {
        $$ = new ArrayDef(dynamic_cast<Range*>($3), $6);
    }
    ;

DeclType
    : Type InitOpt {
        $$ = new ObjectDeclStmt($1, dynamic_cast<InitOptStmt*>($2));
    }
    | CONSTANT Type InitOpt {
        ObjectDeclStmt *stmt = new ObjectDeclStmt($2, dynamic_cast<InitOptStmt*>($3));
        stmt->setConst();
        $$ = stmt;
    }
    | Identifier ASSIGN Expression {
        InitOptStmt* init = new InitOptStmt($3);
        $$ = new ObjectDeclStmt(TypeSystem::integerType, init);
    }
    | Identifier ASSIGN ArrayInit {
        SymbolEntry* se = identifiers->lookup($1);
        if (!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: " << $1 << "\n";
        }
        $$ = new ArrayDecl(se, $3);
    }
    ;

ArrayInit
    : LPAREN Values RPAREN {
        $$ = new ArrayInit($2);
    }
    ;


DefIds
    : DefId {
        $$ = $1;
    }
    | DefIds COMMA DefId {
        $$ = $1;
        $1->setNext($3);
    }
    ;

DefId
    : Identifier {
        IdentifierSymbolEntry *se = new IdentifierSymbolEntry($1, identifiers->getLevel());
        identifiers->install($1, se);
        $$ = new DefId(se);
    }
    ;

DeclItemOrBodys
    : DeclItemOrBody {
        $$ = $1;
    }
	| DeclItemOrBodys DeclItemOrBody {
        $$ = $1;
        $1->setNext($2);
    }
	;

DeclItemOrBody
    : SubprogBody {
        $$ = new DeclItemOrBodyStmt(dynamic_cast<ProcedureDef*>($1));
    }
	| Decl {
        $$ = new DeclItemOrBodyStmt(dynamic_cast<DeclStmt*>($1));
    }
	;

Statements
    : Statement {
        $$ = $1;
    }
	| Statements Statement {
        $$ = $1;
        $1->setNext($2);
    }
	;

Statement
    : SimpleStmt {
        $$ = new Stmt($1);
    }
	| CompoundStmt {
        $$ = new Stmt($1);
    }
    ;

SimpleStmt
    : NullStmt {
        $$ = $1;
    }
	| AssignStmt {
        $$ = $1;
    }
	| ReturnStmt {
        $$ = $1;
    }
	| ProcedureCall {
        $$ = $1;
    }
    | ExitStmt {
        $$ = $1;
    }
    | PutStmt {
        $$ = $1;
    }
    | PutlineStmt {
        $$ = $1;
    }
    | GetStmt {
        $$ = $1;
    }
	;

PutStmt
    : PUT LPAREN SimpleExpression RPAREN SEMICOLON {
        $$ = new PutStmt($3);
    }

    ;

PutlineStmt
    : PUT_LINE LPAREN SimpleExpression RPAREN SEMICOLON {
        $$ = new PutlineStmt($3);
    }
    ;

GetStmt
    : GET LPAREN Identifier RPAREN SEMICOLON {
        IdentifierSymbolEntry *se = dynamic_cast<IdentifierSymbolEntry*>(identifiers->lookup($3));            
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< $3 << "\n";
        }
        $$ = new GetStmt(se);
    }
    ;

CompoundStmt
    : IfStmt {
        $$ = $1;
    }
	| CaseStmt {
        $$ = $1;
    }
	| LoopStmt {
        $$ = $1;
    }
	| Block {
        $$ = $1;
    }
	;

NullStmt
    : NuLL SEMICOLON {
        $$ = new NullStmt();
    }
	;

AssignStmt
    : Identifier ASSIGN Expression SEMICOLON {
        DEBUG_YACC("================Enter AssignStmt=================");
        SymbolEntry *se = identifiers->lookup($1);
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< $1 << "\n";
        }
        $$ = new AssignStmt(se, $3);
        DEBUG_YACC("================Leave AssignStmt=================");
    }
	;

ReturnStmt
    : RETURN SEMICOLON {
        $$ = new ReturnStmt(nullptr);
    }
	| RETURN Expression SEMICOLON {
        $$ = new ReturnStmt($2);
    }
	;

ProcedureCall
    : Name SEMICOLON {
        $$ = new CallStmt(dynamic_cast<Id*>($1));
    }
	;

ExitStmt
    : EXIT IdOpt WhenOpt SEMICOLON {
        $$ = new ExitStmt($3);
    }
	;

WhenOpt
    : %empty { $$ = nullptr; }
	| WHEN Condition {
        $$ = $2;
    }
	;

IfStmt
    : IF CondClauses ElseOpt END IF SEMICOLON {
        $$ = new IfStmt(dynamic_cast<CondClause*>($2), dynamic_cast<Stmt*>($3));
    }
	;

CondClauses
    : CondClause {
        $$ = $1;
    }
	| CondClauses ELSIF CondClause {
        $$ = $1;
        $1->setNext($3);
    }
	;

CondClause
    : CondPart Statements {
        $$ = new CondClause($1, dynamic_cast<Stmt*>($2));
    }
	;

CondPart
    : Condition THEN {
        $$ = $1;
    }
	;

Condition
    : Expression {
        $$ = $1; 
    }
	;

ElseOpt : %empty { $$ = nullptr; }
	| ELSE Statements {
        $$ = $2;
    }
	;

CaseStmt
    : CASE Expression IS Alternatives END CASE SEMICOLON {
        $$ = new CaseStmt($2, dynamic_cast<Alternative*>($4));
    }
	;

Alternatives
    : %empty { $$ = nullptr; }
	| Alternatives Alternative {
        if($1) {
            $$ = $1;
            $1->setNext($2);
        } else {
            $$ = $2;
        }
    }
	;

Alternative
    : WHEN Choices RIGHTSHAFT Statements {
        $$ = new Alternative(dynamic_cast<Choice*>($2), dynamic_cast<Stmt*>($4));
    }
	;

Choices
    : Choice {
        $$ = $1;
    }
	| Choices SINGLEOR Choice {
        $$ = $1;
        $1->setNext($3);
    }
	;

Choice
    : Expression {
        $$ = new Choice($1);
    }
	| DiscreteWithRange {
        $$ = new Choice(dynamic_cast<DiscreteRange*>($1));
    }
	| OTHERS {
        $$ = new Choice(true);
    }
	;

DiscreteWithRange
    : Identifier RANGE Range {
        Type* type = dynamic_cast<Range*>($3)->getType();
        SymbolEntry* se = new IdentifierSymbolEntry(type, $1, identifiers->getLevel());
        $$ = new DiscreteRange(se, dynamic_cast<Range*>($3));
    }
	| Range {
        $$ = new DiscreteRange(dynamic_cast<Range*>($1));
    }
	;

LoopStmt
    : LabelOpt Iteration BasicLoop IdOpt SEMICOLON {
        $$ = new LoopStmt(dynamic_cast<LabelOpt*>($1), dynamic_cast<Iteration*>($2), dynamic_cast<BasicLoopStmt*>($3));
        if(!whileIters.empty() && whileIters.back()) {
            SymbolTable* ScopeTable = identifiers;
            identifiers = identifiers->getPrev();
            delete ScopeTable;
        }
        whileIters.pop_back();
    }
	;

LabelOpt : %empty { $$ = nullptr; }
	| Identifier COLON {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, $1, identifiers->getLevel());
        identifiers->install($1, se);
        $$ = new LabelOpt(se);
    }
	;

Iteration : %empty {
        whileIters.push_back(false);
        $$ = nullptr; 
    }
	| WHILE Condition {
        $$ = new Iteration($2);
        whileIters.push_back(false);
    }
	| IterPart ReverseOpt DiscreteRange {
        $$ = new Iteration(dynamic_cast<IterPart*>($1), $2, dynamic_cast<DiscreteRange*>($3));
        whileIters.push_back(true);
    }
	;

IterPart
    : FOR Identifier IN {
        identifiers = new SymbolTable(identifiers);
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, $2, identifiers->getLevel());
        identifiers->install($2, se);
        $$ = new IterPart(se);
    }
	;

ReverseOpt : %empty { $$ = nullptr; }
	| REVERSE {
        $$ = new OpSignNode(OpSignNode::REVERSE);
    }
	;

BasicLoop
    : LOOP Statements END LOOP {
        $$ = new BasicLoopStmt(dynamic_cast<Stmt*>($2));
    }
	;

IdOpt
	: %empty { $$ = nullptr; }
	| Identifier {
        SymbolEntry* se = identifiers->lookup($1);
        $$ = new Id(se);
    }
	;

DiscreteRange
    : Identifier RangeConstrOpt {
        SymbolEntry *se = identifiers->lookup($1);
        if(se){
            int offset = dynamic_cast<IdentifierSymbolEntry*>(se)->getOffset();
            std::cerr << offset << "\n";
            ExprNode* start = new Constant(new ConstantSymbolEntry(TypeSystem::integerType, 0));
            ExprNode* end = new Constant(new ConstantSymbolEntry(TypeSystem::integerType, offset - 1));
            Range* range = new Range(start, end);
            $$ = new DiscreteRange(range);
        }
        else {
            SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, $1, identifiers->getLevel());
            identifiers->install($1, se);
            $$ = new DiscreteRange(se, dynamic_cast<Range*>($2));
        }
    }
	| Range {
        $$ = new DiscreteRange(dynamic_cast<Range*>($1));
    }
	;

RangeConstrOpt : %empty { $$ = nullptr; }
	| RANGE Range {
        $$ = $2;
    }
	;

Range
    : SimpleExpression DOTDOT SimpleExpression {

        $$ = new Range($1, $3);
    }
    ;

Block
    : LabelOpt BlockDecl BlockBody END IdOpt SEMICOLON {
        $$ = new Block(dynamic_cast<LabelOpt*>($1), dynamic_cast<DeclItemOrBodyStmt*>($2), dynamic_cast<Stmt*>($3));
    }
	;

BlockDecl : %empty { $$ = nullptr; }
	| DECLARE DeclPart {
        $$ = $2;
    }
	;

BlockBody
    : BEGiN Statements {
        DEBUG_YACC("================Enter BlockBody=================");
        $$ = $2;
        DEBUG_YACC("================Enter BlockBody=================");

    }
	;

Expression
    : Relation {
        $$ = $1;
    }
	| Expression Logical Relation {
        $$ = new BinaryExpr($1, $3, $2);
    }
	| Expression ShortCircuit Relation {
        $$ = new BinaryExpr($1, $3, $2);
    }
	;

Logical
    : AND {
        $$ = new OpSignNode(OpSignNode::AND);
    }
	| OR {
        $$ = new OpSignNode(OpSignNode::OR);
    }
	| XOR {
        $$ = new OpSignNode(OpSignNode::XOR);
    }
	;

ShortCircuit
    : AND THEN {
        $$ = new OpSignNode(OpSignNode::ANDTHEN);
    }
	| OR ELSE {
        $$ = new OpSignNode(OpSignNode::ORELSE);
    }
	;

Relation
    : SimpleExpression {
        $$ = $1;
    }
	| SimpleExpression Relational SimpleExpression {
        $$ = new BinaryExpr($1, $3, $2);
    }
	| SimpleExpression Membership Range {
        $$ = new BinaryExpr($1, dynamic_cast<Range*>($3), $2);
    }
	| SimpleExpression Membership Identifier {
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, $3, identifiers->getLevel());
        $$ = new BinaryExpr($1, se, $2);
    }
	;

Relational
    : EQ {
        $$ = new OpSignNode(OpSignNode::EQ);
    }
	| NE {
        $$ = new OpSignNode(OpSignNode::NE);
    }
	| LE {
        $$ = new OpSignNode(OpSignNode::LE);
    }
	| LTEQ {
        $$ = new OpSignNode(OpSignNode::LTEQ);
    }
	| GE {
        $$ = new OpSignNode(OpSignNode::GE);
    }
 	| GTEQ {
        $$ = new OpSignNode(OpSignNode::GTEQ);
    }
	;

Membership
    : IN {
        $$ = new OpSignNode(OpSignNode::IN);
    }
	| NOT IN {
        $$ = new OpSignNode(OpSignNode::NOTIN);
    }
	;

SimpleExpression
    : Unary Term {
        $$ = new BinaryExpr($2, $1);
    }
	| Term {
        $$ = $1;
    }
	| SimpleExpression Adding Term {
        $$ = new BinaryExpr($1, $3, $2);
    }
	;

Unary
    : ADD {
        $$ = new OpSignNode(OpSignNode::ADD);
    }
	| SUB {
        $$ = new OpSignNode(OpSignNode::SUB);
    }
	;

Adding
    : ADD {
        $$ = new OpSignNode(OpSignNode::ADD);
    }
	| SUB {
        $$ = new OpSignNode(OpSignNode::SUB);
    }
	| SINGLEAND {
        $$ = new OpSignNode(OpSignNode::SINGLEAND);
    }
	;

Term
    : Factor {
        $$ = $1;
    }
	| Term Multiplying Factor {
        $$ = new BinaryExpr($1, $3, $2);
    }
	;

Multiplying
    : MUL {
        $$ = new OpSignNode(OpSignNode::MUL);
    }
	| DIV {
        $$ = new OpSignNode(OpSignNode::DIV);
    }
	| MOD {
        $$ = new OpSignNode(OpSignNode::MOD);
    }
	| REM {
        $$ = new OpSignNode(OpSignNode::REM);
    }
	;

Factor
    : Primary {
        $$ = $1;
    }
	| NOT Primary {
        $$ = new FactorExpr($2, FactorExpr::NOT);
    }
	| ABS Primary {
        $$ = new FactorExpr($2, FactorExpr::ABS);
    }
	| Primary EXPON Primary {
        $$ = new BinaryExpr($1, $3, new OpSignNode(OpSignNode::EXPON));
    }
	;

Primary
    : Literal {
        $$ = $1;
    }
	| Name {
        $$ = $1;
    }
	;

Name
    : Identifier {
        SymbolEntry* se = identifiers->lookup($1);
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get SymbolEntry "<< $1 << " !\n";
        }
        $$ = new Id(se);
    }
    | IndexedComp {
        $$ = $1;
    }
    | Attribute {
        $$ = $1;
    }
    | INTEGER {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, "Integer", 0);
        globals->install("Integer", se);
        $$ = new Id(se);
    }
    | FLOAT {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::floatType, "Float", 0);
        globals->install("Float", se);
        $$ = new Id(se);
    }
    ;

IndexedComp
    : Name LPAREN Values RPAREN {
        $$ = new Id(dynamic_cast<Id*>($1), $3);
    }
    ;

Values
    : Value {
        $$ = $1;
    }
 	| Values COMMA Value {
        $$ = $1;
        $1->setNext($3);
    }
	;

Value
    : Expression {
        $$ = $1;
    }
	;

Attribute
    : Name TIC AttributeId {
        $$ = new Id(dynamic_cast<Id*>($1), $3);
    }
    ;

AttributeId
    : Identifier {
        $$ = $1;
    }
	;

Literal
    : DECIMAL {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::integerType, $1);
        $$ = new Constant(se);
    }
    | SINGLECHAR {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::characterType, $1);
        $$ = new Constant(se);
    }
    | STRINGLITERAL {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::stringType, $1);
        $$ = new Constant(se);
    }
    | FLOATNUM {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::floatType, $1);
        $$ = new Constant(se);
    }
    | NuLL {
        $$ = nullptr;
    }
    | TRuE {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, true);
        $$ = new Constant(se);
    }
    | FALsE {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, false);
        $$ = new Constant(se);
    }
    ;
%%

int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
