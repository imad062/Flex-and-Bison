%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "save.tab.h"

    void yyerror(const char *);
%}

%%

[0-9]+          {return VAL;}
[a-zA-Z]+       {   
                    int tot_val = 0;
                    int i;
                    for(i = 0; i < strlen(yytext);i++)
                    {
                        tot_val += (*yytext - 'a' + 1) * (i+1);
                    }
                    return VAR;
                    yylval = tot_val;
                    int_val = yylval;
                    return VAR;
                    
                }
[ \n\t]         {;}

%%

int yywrap()
{

}

void yyerror(const char *msg)
{
    printf("ERROR: %s",msg);
}

int main()
{
    yyparse();
}