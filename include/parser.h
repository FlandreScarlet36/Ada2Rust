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
    CONSTANT = 286,                /* CONSTANT  */
    DECLARE = 287,                 /* DECLARE  */
    DELAY = 288,                   /* DELAY  */
    DELTA = 289,                   /* DELTA  */
    DIGITS = 290,                  /* DIGITS  */
    DO = 291,                      /* DO  */
    ELSE = 292,                    /* ELSE  */
    ELSIF = 293,                   /* ELSIF  */
    END = 294,                     /* END  */
    ENTRY = 295,                   /* ENTRY  */
    EXCEPTION = 296,               /* EXCEPTION  */
    EXIT = 297,                    /* EXIT  */
    FOR = 298,                     /* FOR  */
    FUNCTION = 299,                /* FUNCTION  */
    GENERIC = 300,                 /* GENERIC  */
    GOTO = 301,                    /* GOTO  */
    IF = 302,                      /* IF  */
    IN = 303,                      /* IN  */
    IS = 304,                      /* IS  */
    LIMITED = 305,                 /* LIMITED  */
    LOOP = 306,                    /* LOOP  */
    MUL = 307,                     /* MUL  */
    DIV = 308,                     /* DIV  */
    MOD = 309,                     /* MOD  */
    NEW = 310,                     /* NEW  */
    NOT = 311,                     /* NOT  */
    SUB = 312,                     /* SUB  */
    ADD = 313,                     /* ADD  */
    NuLL = 314,                    /* NuLL  */
    OF = 315,                      /* OF  */
    OR = 316,                      /* OR  */
    OTHERS = 317,                  /* OTHERS  */
    OUT = 318,                     /* OUT  */
    PACKAGE = 319,                 /* PACKAGE  */
    PRAGMA = 320,                  /* PRAGMA  */
    PRIVATE = 321,                 /* PRIVATE  */
    PROCEDURE = 322,               /* PROCEDURE  */
    PROTECTED = 323,               /* PROTECTED  */
    RAISE = 324,                   /* RAISE  */
    RANGE = 325,                   /* RANGE  */
    RECORD = 326,                  /* RECORD  */
    REM = 327,                     /* REM  */
    RENAMES = 328,                 /* RENAMES  */
    REQUEUE = 329,                 /* REQUEUE  */
    RETURN = 330,                  /* RETURN  */
    REVERSE = 331,                 /* REVERSE  */
    SELECT = 332,                  /* SELECT  */
    SEPARATE = 333,                /* SEPARATE  */
    SUBTYPE = 334,                 /* SUBTYPE  */
    TAGGED = 335,                  /* TAGGED  */
    TASK = 336,                    /* TASK  */
    TERMINATE = 337,               /* TERMINATE  */
    THEN = 338,                    /* THEN  */
    TYPE = 339,                    /* TYPE  */
    UNTIL = 340,                   /* UNTIL  */
    USE = 341,                     /* USE  */
    WHEN = 342,                    /* WHEN  */
    WHILE = 343,                   /* WHILE  */
    WITH = 344,                    /* WITH  */
    XOR = 345,                     /* XOR  */
    PUT_LINE = 346,                /* PUT_LINE  */
    PUT = 347,                     /* PUT  */
    GET = 348,                     /* GET  */
    TRuE = 349,                    /* TRuE  */
    FALsE = 350,                   /* FALsE  */
    DECIMIAL = 351,                /* DECIMIAL  */
    FLOATNUM = 352,                /* FLOATNUM  */
    SINGLECHAR = 353,              /* SINGLECHAR  */
    Identifier = 354,              /* Identifier  */
    STRINGLITERAL = 355,           /* STRINGLITERAL  */
    PACKAGEID = 356,               /* PACKAGEID  */
    INTEGER = 357,                 /* INTEGER  */
    STRING = 358,                  /* STRING  */
    NATURAL = 359,                 /* NATURAL  */
    BOOLEAN = 360,                 /* BOOLEAN  */
    CHARACTER = 361,               /* CHARACTER  */
    FLOAT = 362,                   /* FLOAT  */
    COLON = 363,                   /* COLON  */
    SEMICOLON = 364,               /* SEMICOLON  */
    LPAREN = 365,                  /* LPAREN  */
    RPAREN = 366,                  /* RPAREN  */
    COMMA = 367,                   /* COMMA  */
    SINGLEAND = 368,               /* SINGLEAND  */
    SINGLEOR = 369                 /* SINGLEOR  */
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
    float FloatType;
    StmtNode* StmtType;
    ExprNode* ExprType;
    OpSignNode* SignType;
    Type* type;
    PackageCall* packageCall;

#line 197 "/mnt/hgfs/Graduation/Ada2Rust/include/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MNT_HGFS_GRADUATION_ADA2RUST_INCLUDE_PARSER_H_INCLUDED  */
