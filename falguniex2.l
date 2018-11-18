%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "falguniex2.tab.h"    

    void yyerror(const char *);
%}


%%

[0-9]+ { 
            yylval = atoi(yytext);
            if(yylval%2 == 0){ return EVEN; }
            else { return ODD; }
       }

[ /n/t] {;} 

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

