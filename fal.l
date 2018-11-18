%{
#include <stdio.h>
#include <stdlib.h>
#include "fal.tab.h"
void yyerror(const char *);
%}

%%
[0-9]+ {yylval=atoi(yytext); return NUM;}
"+" {return PLUS;}
[ \n\t] {;}
%%

int yywrap(){

}

void yyerror(const char *msg)
{
printf("ERROR: %s\n", msg);
}

int main(){
yyparse();
}