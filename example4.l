    //Example4: A simple calculator that can only perform operations on digits
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "example4.tab.h"

    void yyerror(char *)
%}

%%

[0-9]+ {yylval.double_val = atof(yytext); return NUM;}
"+"    {return PLUS;}
"-"    {return MINUS;}
"*"    {return MUL;}
"/"    {return DIV;}
"("    {return LPAREN;}
")"    {return RPAREN;}
";"    {return END;}
[ \n\t]{;}

%%

void yyerror(char* msg){
     printf("ERROR: Couldn't parse : %s", msg);
}

int yywrap(void){
    return 0;
}

int main(void){
    yyparse();
}

