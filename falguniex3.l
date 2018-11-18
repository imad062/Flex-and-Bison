%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "falguniex3.tab.h"

    void yyerror( const char *);
%}


%%

[0-9]+  { yylval=atoi(yytext); return NUM; }

"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}

[ \n\t] {;}

%%

void yyerror(const char *s)
{
    printf("error: %s",s);
}

int yywrap()
{

}

int main()
{
    yyparse();
}