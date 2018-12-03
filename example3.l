    //Flex file for Example3: A program that checks whether a number is even or odd
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "example3.tab.h"
    int inp;

    void yyerror(char *);
%}

%%

[0-9]+      {
                inp = atoi(yytext);
                if(inp%2 == 0){
                    printf("EVEN\n");
                    return EVEN;
                }
                else{
                    printf("ODD\n");
                    return ODD;
                }
            }
[ \n\t]+    {;}

%%

int yywrap(void){
}

void yyerror(char* msg){
     printf("ERROR: Couldn't parse: %s", msg);
}

int main(){
    yyparse();
}
