%option noyywrap
%option yylineno
%{
    #define YY_NO_UNPUT
    #define YY_NO_INPUT
    #include <stdio.h>
    #include <ctype.h>
    #include "parser2.h"

    #include <ostream>
    #include <fstream>
    #include <iostream>
    using namespace std;
    extern FILE *yyin; 
    extern FILE *yyout;
    extern bool dump_token;

    int error_count;

    typedef struct {
  char *kw;
  int kwv;
} KEY_TABLE;

#define NUM_KEYWORDS 69

KEY_TABLE key_tab[NUM_KEYWORDS] = {{"ABORT", ABORT},
                                   {"ABS", ABS},
                                   {"ABSTRACT", ABSTRACT},
                                   {"ACCEPT", ACCEPT},
                                   {"ACCESS", ACCESS},
                                   {"ALIASED", ALIASED},
                                   {"ALL", ALL},
                                   {"AND", AND},
                                   {"ARRAY", ARRAY},
                                   {"AT", AT},
                                   {"BEGIN", BEGiN},
                                   {"BODY", BODY},
                                   {"CASE", CASE},
                                   {"CONSTANT", CONSTANT},
                                   {"DECLARE", DECLARE},
                                   {"DELAY", DELAY},
                                   {"DELTA", DELTA},
                                   {"DIGITS", DIGITS},
                                   {"DO", DO},
                                   {"ELSE", ELSE},
                                   {"ELSIF", ELSIF},
                                   {"END", END},
                                   {"ENTRY", ENTRY},
                                   {"EXCEPTION", EXCEPTION},
                                   {"EXIT", EXIT},
                                   {"FOR", FOR},
                                   {"FUNCTION", FUNCTION},
                                   {"GENERIC", GENERIC},
                                   {"GOTO", GOTO},
                                   {"IF", IF},
                                   {"IN", IN},
                                   {"IS", IS},
                                   {"LIMITED", LIMITED},
                                   {"LOOP", LOOP},
                                   {"MOD", MOD},
                                   {"NEW", NEW},
                                   {"NOT", NOT},
                                   {"NULL", NuLL},
                                   {"OF", OF},
                                   {"OR", OR},
                                   {"OTHERS", OTHERS},
                                   {"OUT", OUT},
                                   {"PACKAGE", PACKAGE},
                                   {"PRAGMA", PRAGMA},
                                   {"PRIVATE", PRIVATE},
                                   {"PROCEDURE", PROCEDURE},
                                   {"PROTECTED", PROTECTED},
                                   {"RAISE", RAISE},
                                   {"RANGE", RANGE},
                                   {"RECORD", RECORD},
                                   {"REM", REM},
                                   {"RENAMES", RENAMES},
                                   {"REQUEUE", REQUEUE},
                                   {"RETURN", RETURN},
                                   {"REVERSE", REVERSE},
                                   {"SELECT", SELECT},
                                   {"SEPARATE", SEPARATE},
                                   {"SUBTYPE", SUBTYPE},
                                   {"TAGGED", TAGGED},
                                   {"TASK", TASK},
                                   {"TERMINATE", TERMINATE},
                                   {"THEN", THEN},
                                   {"TYPE", TYPE},
                                   {"UNTIL", UNTIL},
                                   {"USE", USE},
                                   {"WHEN", WHEN},
                                   {"WHILE", WHILE},
                                   {"WITH", WITH},
                                   {"XOR", XOR}};

void to_upper(char *str) {
  char *cp;
  for (cp = str; *cp; cp++) {
    if (islower(*cp))
      *cp -= ('a' - 'A');
  }
}

int yyerror(char *s) {
  extern int yychar;

  error_count++;

  fprintf(stderr, "  %s", s);
  if (yylineno)
    fprintf(stderr, ", on line %d,", yylineno);
  fprintf(stderr, " on input: ");
  if (yychar >= 0400) {
    if ((yychar >= ABORT) && (yychar <= XOR)) {
      fprintf(stderr, "(token) %s #%d\n", key_tab[yychar - ABORT].kw, yychar);
    } else
      switch (yychar) {
      case char_lit:
        fprintf(stderr, "character literal\n");
        break;
      case identifier:
        fprintf(stderr, "identifier\n");
        break;
      case char_string:
        fprintf(stderr, "string\n");
        break;
      case numeric_lit:
        fprintf(stderr, "numeric literal\n");
        break;
      case TIC:
        fprintf(stderr, "single-quote\n");
        break;
      case DOT_DOT:
        fprintf(stderr, "..\n");
        break;
      case LT_LT:
        fprintf(stderr, "<<\n");
        break;
      case BOX:
        fprintf(stderr, "<>\n");
        break;
      case LT_EQ:
        fprintf(stderr, "<=\n");
        break;
      case EXPON:
        fprintf(stderr, "**\n");
        break;
      case NE:
        fprintf(stderr, "/=\n");
        break;
      case GT_GT:
        fprintf(stderr, ">>\n");
        break;
      case GE:
        fprintf(stderr, ">=\n");
        break;
      case IS_ASSIGNED:
        fprintf(stderr, ":=\n");
        break;
      case RIGHT_SHAFT:
        fprintf(stderr, "=>\n");
        break;
      default:
        fprintf(stderr, "(token) %d\n", yychar);
      }
  } else {
    switch (yychar) {
    case '\t':
      fprintf(stderr, "horizontal-tab\n");
      return -1;
    case '\n':
      fprintf(stderr, "newline\n");
      return -1;
    case '\0':
      fprintf(stderr, "\$end\n");
      return -1;
    case ' ':
      fprintf(stderr, "(blank)");
      return -1;
    default:
      fprintf(stderr, "(char) %c\n", yychar);
      return -1;
    }
  }
}
%}

DIGIT                   [0-9]
EXTENDED_DIGIT          [0-9a-zA-Z]
INTEGER                 ({DIGIT}(_?{DIGIT})*)
EXPONENT                ([eE](\+?|-){INTEGER})
DECIMAL_LITERAL         {INTEGER}(\.?{INTEGER})?{EXPONENT}?
BASE                    {INTEGER}
BASED_INTEGER           {EXTENDED_DIGIT}(_?{EXTENDED_DIGIT})*
BASED_LITERAL           {BASE}#{BASED_INTEGER}(\.{BASED_INTEGER})?#{EXPONENT}?

%%
"."                     return('.');
"<"                     return('<');
"("                     return('('); 
"+"                     return('+');
"|"                     return('|');
"&"                     return('&');
"*"                     return('*');
")"                     return(')');
";"                     return(';');
"-"                     return('-');
"/"                     return('/');
","                     return(',');
">"                     return('>');
":"                     return(':');
"="                     return('=');
"'"                     return(TIC);
".."                    return(DOT_DOT);
"<<"                    return(LT_LT);
"<>"                    return(BOX);
"<="                    return(LT_EQ);
"**"                    return(EXPON);
"/="                    return(NE);
">>"                    return(GT_GT);
">="                    return(GE);
":="                    return(IS_ASSIGNED);
"=>"                    return(RIGHT_SHAFT);
[a-zA-Z](_?[a-zA-Z0-9])* {
  int min;
  int max;
  int guess, compare;

  min = 0;
  max = strlen(yytext) - 1;
  guess = (min + max) / 2;
  to_upper(yytext);

  for (guess = (min + max) / 2; min <= max; guess = (min + max) / 2) {
    if ((compare = strcmp(key_tab[guess].kw, yytext)) < 0) {
      min = guess + 1;
    } else if (compare > 0) {
      max = guess - 1;
    } else {
      return key_tab[guess].kwv;
    }
  }
  return identifier;
}
"'"."'"                 return(char_lit);
\"(\"\"|[^\n\"])*\"   return(char_string);
{DECIMAL_LITERAL}       return(numeric_lit);
{BASED_LITERAL}         return(numeric_lit);
--.*\n                  ;
[ \t\n\f]               ;
.                      {fprintf(stderr, "  Illegal character:%c: on line %d\n",
                            *yytext, yylineno);
                         error_count++;}
%%

int main(int argc, char *argv[]){
    /* Simple Ada 9X syntax checker */
    /* Checks standard input if no arguments */
    /* Checks files if one or more arguments */

    extern int error_count;
    extern int yyparse();
    extern int yylineno;
    FILE *flptr;
    int i;

    if (argc == 1) {
	yyparse();
    } else {
	for (i = 1; i < argc; i++) {
	    if ((flptr = freopen(argv[i], "r",stdin)) == NULL) {
		fprintf(stderr, "%s:  Can't open %s", argv[0], argv[i]);
	    } else {
		if (argc > 2) fprintf(stderr, "%s:\n", argv[i]);
		yylineno = 1;
		yyparse();
	    }
	}
    }
    if (error_count) {
	fprintf(stderr, "%d syntax error%s detected\n", error_count,
	  error_count == 1? "": "s");
	exit(-1);
    } else {
	fprintf(stderr, "No syntax errors detected\n");
    }
}

