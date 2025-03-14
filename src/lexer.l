%option noyywrap
%option yylineno
%{
    #define YY_NO_UNPUT
    #define YY_NO_INPUT
    #define ONLY_FOR_LEX
    #include "parser.h"
    #include <ostream>
    #include <fstream>
    #include <iostream>
    using namespace std;
    extern FILE *yyin; 
    extern FILE *yyout;
    extern bool dump_token;
    int offsets = 0;
    int newoffsets = 0;

    void DUMP_TOKEN(std::string s){
        std::string DEBUG_INFO = "[TOKEN]: \t" + s + "\n";
        fputs(DEBUG_INFO.c_str(), yyout);
    }

    void update_loc(){
        offsets = newoffsets;
        newoffsets = offsets + strlen(yytext);
    }
    #define YY_USER_ACTION update_loc();  
    
    #define NUM_KEYWORDS 80
    typedef struct {
      char *keyword;
      int keyword_value;
    } KEY_TABLE;

    KEY_TABLE key_tab[NUM_KEYWORDS] = 
        {{"ABORT", ABORT},
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
            {"BOOLEAN", BOOLEAN},
            {"CASE", CASE},
            {"CHARACTER", CHARACTER},
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
            {"FALSE", FALsE},
            {"FLOAT", FLOAT},
            {"FOR", FOR},
            {"FUNCTION", FUNCTION},
            {"GENERIC", GENERIC},
            {"GET", GET},
            {"GOTO", GOTO},
            {"IF", IF},
            {"IN", IN},
            {"INTEGER", INTEGER},
            {"IS", IS},
            {"LIMITED", LIMITED},
            {"LOOP", LOOP},
            {"MOD", MOD},
            {"NATURAL", NATURAL},
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
            {"PUT", PUT},
            {"PUT_LINE", PUT_LINE},
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
            {"STRING", STRING},
            {"SUBTYPE", SUBTYPE},
            {"TAGGED", TAGGED},
            {"TASK", TASK},
            {"TERMINATE", TERMINATE},
            {"THEN", THEN},
            {"TRUE", TRuE},
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
%}

DECIMAL ([1-9][0-9]*|0)
FLOATNUM ([0-9]*\.[0-9]+([eE][-+]?[0-9]+)?|[0-9]+[eE][-+]?[0-9]+)
PACKAGEID [a-zA-Z](_?[a-zA-Z0-9])*\.[a-zA-Z](_?[a-zA-Z0-9])*
ID [a-zA-Z](_?[a-zA-Z0-9])*
SINGLECHAR '([^\\]|\\.)'
STRINGLITERAL \"(\"\"|[^\n\"])*\"
EOL (\r\n|\n|\r)
WHITE [ \t\f]

LINECOMMENT --.*\n

%%
"+" {
    if(dump_token) 
        DUMP_TOKEN("ADD\t+");
    return ADD;
}
"-" {
    if(dump_token) 
        DUMP_TOKEN("SUB\t-");
    return SUB;
}
"*" {
    if(dump_token) 
        DUMP_TOKEN("MUL\t*");
    return MUL;
}
"/" {
    if(dump_token) 
        DUMP_TOKEN("DIV\t/");
    return DIV;
}
"=" {
    if(dump_token) 
        DUMP_TOKEN("EQ\t=");
    return EQ;
}
"<<" {
    if(dump_token) 
        DUMP_TOKEN("LTLT\t<<");
    return LTLT;
}
">>" {
    if(dump_token) 
        DUMP_TOKEN("GTGT\t>>");
    return GTGT;
}
"<>" {
    if(dump_token) 
        DUMP_TOKEN("BOX\t<>");
    return BOX;
}
"<=" {
    if(dump_token) 
        DUMP_TOKEN("LTEQ\t<=");
    return LTEQ;
}
"**" {
    if(dump_token) 
        DUMP_TOKEN("EXPON\t**");
    return EXPON;
}
"/=" {
    if(dump_token) 
        DUMP_TOKEN("NE\t/=");
    return NE;
}
"<" {
    if(dump_token) 
        DUMP_TOKEN("LE\t<");
    return LE;
}
">" {
    if(dump_token) 
        DUMP_TOKEN("GE\t>");
    return GE;
}
">=" {
    if(dump_token) 
        DUMP_TOKEN("GTEQ\t>=");
    return GTEQ;
}
":=" {
    if(dump_token) 
        DUMP_TOKEN("ASSIGN\t:=");
    return ASSIGN;
}
"=>" {
    if(dump_token) 
        DUMP_TOKEN("RIGHTSHAFT\t=>");
    return RIGHTSHAFT;
}
":" {
    if(dump_token) 
        DUMP_TOKEN("COLON\t:");
    return COLON;
}
";" {
    if(dump_token) 
        DUMP_TOKEN("SEMICOLON\t;");
    return SEMICOLON;
}
"(" {
    if(dump_token) 
        DUMP_TOKEN("LPAREN\t(");
    return LPAREN;
}
")" {
    if(dump_token) 
        DUMP_TOKEN("RPAREN\t)");
    return RPAREN;
}
"," {
    if(dump_token) 
        DUMP_TOKEN("COMMA\t,");
    return COMMA;
}
"&" {
    if(dump_token) 
        DUMP_TOKEN("SINGLEAND\t&");
    return SINGLEAND;
}
"|" {
    if(dump_token) 
        DUMP_TOKEN("SINGLEOR\t|");
    return SINGLEOR;
}
"'" {
    if(dump_token) 
        DUMP_TOKEN("TIC\t'");
    return TIC;
}
"." {
    if(dump_token) 
        DUMP_TOKEN("ONEDOT\t.");
    return ONEDOT;
}
".." {
    if(dump_token) 
        DUMP_TOKEN("DOTDOT\t..");
    return DOTDOT;
}

{PACKAGEID} {
    if(dump_token)
        DUMP_TOKEN("PACKAGEID\t" + std::string(yytext));
    yylval.StrType = strdup(yytext);
    return PACKAGEID;
}

{ID} {
    int min = 0;
    int max = NUM_KEYWORDS - 1;
    int guess, compare;

    std::string token(yytext);
    to_upper(yytext);

    while (min <= max) {
        guess = (min + max) / 2;
        compare = strcmp(key_tab[guess].keyword, yytext);
        if (compare < 0) {
            min = guess + 1;
        } else if (compare > 0) {
            max = guess - 1;
        } else {
            if (dump_token)
                DUMP_TOKEN(std::string(key_tab[guess].keyword) + "\t" + token);
            return key_tab[guess].keyword_value;
        }
    }

    if (dump_token)
        DUMP_TOKEN("Identifier\t" + token);
    yylval.StrType = strdup(token.c_str());
    return Identifier;
}

{DECIMAL} {
    int num = atoi(yytext);
    if(dump_token)
        DUMP_TOKEN("DECIMAL\t" + std::string(yytext));
    yylval.IntType = atoi(yytext);
    return DECIMAL;
}

{FLOATNUM} {
    if(dump_token)
        DUMP_TOKEN("FLOATNUM\t" + std::string(yytext));
    yylval.FloatType = atof(yytext);
    return FLOATNUM;
}

{SINGLECHAR} {
    if(dump_token)
        DUMP_TOKEN("SINGLECHAR\t" + std::string(yytext));
    yylval.CharType = yytext[1]; // 提取字符
    return SINGLECHAR;
}

{STRINGLITERAL} {
    char *token;
    token = new char[strlen(yytext) - 1];
    strncpy(token, yytext + 1, strlen(yytext) - 2);
    yylval.StrType = token;
    if(dump_token)
        DUMP_TOKEN(std::string("STRINGLITERAL\t") + std::string(token));
    return STRINGLITERAL;
}

<*>{EOL} {
    newoffsets = 0;
}

{WHITE}
{LINECOMMENT} {}

%%
