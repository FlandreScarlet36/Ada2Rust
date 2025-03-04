/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MNT_HGFS_GRADUATION_ADA2RUST_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_MNT_HGFS_GRADUATION_ADA2RUST_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 27 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"

    #include "SymbolTable.h"
    #include "Ast.h"

#line 54 "/mnt/hgfs/Graduation/Ada2Rust/include/parser.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TIC = 258,                     /* TIC  */
    ONEDOT = 259,                  /* ONEDOT  */
    DOTDOT = 260,                  /* DOTDOT  */
    LTLT = 261,                    /* LTLT  */
    BOX = 262,                     /* BOX  */
    LTEQ = 263,                    /* LTEQ  */
    GTEQ = 264,                    /* GTEQ  */
    EXPON = 265,                   /* EXPON  */
    NE = 266,                      /* NE  */
    GTGT = 267,                    /* GTGT  */
    GE = 268,                      /* GE  */
    LE = 269,                      /* LE  */
    EQ = 270,                      /* EQ  */
    ASSIGN = 271,                  /* ASSIGN  */
    RIGHTSHAFT = 272,              /* RIGHTSHAFT  */
    ABORT = 273,                   /* ABORT  */
    ABS = 274,                     /* ABS  */
    ABSTRACT = 275,                /* ABSTRACT  */
    ACCEPT = 276,                  /* ACCEPT  */
    ACCESS = 277,                  /* ACCESS  */
    ALIASED = 278,                 /* ALIASED  */
    ALL = 279,                     /* ALL  */
    AND = 280,                     /* AND  */
    ARRAY = 281,                   /* ARRAY  */
    AT = 282,                      /* AT  */
    BEGiN = 283,                   /* BEGiN  */
    BODY = 284,                    /* BODY  */
    CASE = 285,                    /* CASE  */
    CHARACTER = 286,               /* CHARACTER  */
    CONSTANT = 287,                /* CONSTANT  */
    DECLARE = 288,                 /* DECLARE  */
    DELAY = 289,                   /* DELAY  */
    DELTA = 290,                   /* DELTA  */
    DIGITS = 291,                  /* DIGITS  */
    DO = 292,                      /* DO  */
    ELSE = 293,                    /* ELSE  */
    ELSIF = 294,                   /* ELSIF  */
    END = 295,                     /* END  */
    ENTRY = 296,                   /* ENTRY  */
    EXCEPTION = 297,               /* EXCEPTION  */
    EXIT = 298,                    /* EXIT  */
    FOR = 299,                     /* FOR  */
    FUNCTION = 300,                /* FUNCTION  */
    GENERIC = 301,                 /* GENERIC  */
    GOTO = 302,                    /* GOTO  */
    IF = 303,                      /* IF  */
    IN = 304,                      /* IN  */
    IS = 305,                      /* IS  */
    LIMITED = 306,                 /* LIMITED  */
    LOOP = 307,                    /* LOOP  */
    MUL = 308,                     /* MUL  */
    DIV = 309,                     /* DIV  */
    MOD = 310,                     /* MOD  */
    NEW = 311,                     /* NEW  */
    NOT = 312,                     /* NOT  */
    SUB = 313,                     /* SUB  */
    ADD = 314,                     /* ADD  */
    NuLL = 315,                    /* NuLL  */
    OF = 316,                      /* OF  */
    OR = 317,                      /* OR  */
    OTHERS = 318,                  /* OTHERS  */
    OUT = 319,                     /* OUT  */
    PACKAGE = 320,                 /* PACKAGE  */
    PRAGMA = 321,                  /* PRAGMA  */
    PRIVATE = 322,                 /* PRIVATE  */
    PROCEDURE = 323,               /* PROCEDURE  */
    PROTECTED = 324,               /* PROTECTED  */
    RAISE = 325,                   /* RAISE  */
    RANGE = 326,                   /* RANGE  */
    RECORD = 327,                  /* RECORD  */
    REM = 328,                     /* REM  */
    RENAMES = 329,                 /* RENAMES  */
    REQUEUE = 330,                 /* REQUEUE  */
    RETURN = 331,                  /* RETURN  */
    REVERSE = 332,                 /* REVERSE  */
    SELECT = 333,                  /* SELECT  */
    SEPARATE = 334,                /* SEPARATE  */
    SUBTYPE = 335,                 /* SUBTYPE  */
    TAGGED = 336,                  /* TAGGED  */
    TASK = 337,                    /* TASK  */
    TERMINATE = 338,               /* TERMINATE  */
    THEN = 339,                    /* THEN  */
    TYPE = 340,                    /* TYPE  */
    UNTIL = 341,                   /* UNTIL  */
    USE = 342,                     /* USE  */
    WHEN = 343,                    /* WHEN  */
    WHILE = 344,                   /* WHILE  */
    WITH = 345,                    /* WITH  */
    XOR = 346,                     /* XOR  */
    PUT_LINE = 347,                /* PUT_LINE  */
    PUT = 348,                     /* PUT  */
    GET = 349,                     /* GET  */
    TRuE = 350,                    /* TRuE  */
    FALsE = 351,                   /* FALsE  */
    DECIMIAL = 352,                /* DECIMIAL  */
    SINGLECHAR = 353,              /* SINGLECHAR  */
    Identifier = 354,              /* Identifier  */
    STRINGLITERAL = 355,           /* STRINGLITERAL  */
    PACKAGEID = 356,               /* PACKAGEID  */
    INTEGER = 357,                 /* INTEGER  */
    STRING = 358,                  /* STRING  */
    NATURAL = 359,                 /* NATURAL  */
    BOOLEAN = 360,                 /* BOOLEAN  */
    COLON = 361,                   /* COLON  */
    SEMICOLON = 362,               /* SEMICOLON  */
    LPAREN = 363,                  /* LPAREN  */
    RPAREN = 364,                  /* RPAREN  */
    COMMA = 365,                   /* COMMA  */
    SINGLEAND = 366,               /* SINGLEAND  */
    SINGLEOR = 367                 /* SINGLEOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"

    char* StrType;
    char CharType;
    int IntType;
    StmtNode* StmtType;
    ExprNode* ExprType;
    OpSignNode* SignType;
    Type* type;
    PackageCall* packageCall;

#line 194 "/mnt/hgfs/Graduation/Ada2Rust/include/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MNT_HGFS_GRADUATION_ADA2RUST_INCLUDE_PARSER_H_INCLUDED  */
