    //Flex file for Example7: Calculator v2
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    //make sure this is before the tab include, as the union in the bison file is included in tab file and if you don't declare c++ things before them, then there will be errors
    using namespace std;
    #include "example7.tab.h"

    void yyerror(const char *);
%}

%%

[0-9]+	{ yylval.double_val=atof(yytext); return VAL;}
[A-Za-z]+ { yylval.string_val=new string(yytext); return VAR;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"=" {return EQUAL;}
"("	{return LPAREN;}
")"	{return RPAREN;}
";" 	{return END;}
[ \n\t] {;}
%%

int yywrap(){
     return 0;
}

void yyerror(const char *msg){
     printf("ERROR: Couldn't parse: %s\n", msg);
}

int main(){
    yyparse();
}
