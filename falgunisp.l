%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "falgunisp.tab.h"

    void yyerror(const char *);
%}

%%

[a-z]+  {   
            int i;
            for(i = 0; i < strlen(yytext); i++)
            {
                yylval.str[i] = yytext[i];
            }
            return VAR;}
[0-9]+  {return VAL;}
[ \n\t] {;}
"="     {return EQUAL;}
";"     {return END;}

%%

int yywrap()
{

}

void yyerror(const char * msg)
{
    printf("MSG: %s",msg);
}

int main()
{
    yyparse();
}