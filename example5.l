    //Example5: A program for infix to postfix conversion
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    using namespace std;
    #include "example5.tab.h"
    void yyerror(const char *);
%}

%%

[0-9]+	{yylval.double_val=atof(yytext); return VAL;}
[-+/*]	{yylval.string_val=new string(yytext); return OP;}
[ \n\t] {;}

%%

int yywrap(){
    return 0;
}

void yyerror(const char * msg){
     printf("ERROR: Couldn't parse: %s\n", msg);
}

int main(){
    yyparse();
}
