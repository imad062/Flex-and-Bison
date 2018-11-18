%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "falguniex1.tab.h"

    void yyerror(const char *);
%}

%%

"hello world"   {return HELLO;} 
"goodbye"       {return BYE;}
";"             {return END;}
[ \n\t]         {;}

%%

int yywrap(){

}

void yyerror(const char * msg){
    printf("ERROR: %s\n", msg);
}

int main()
{
    yyparse();
}