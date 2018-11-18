%{
    #include <stdio.h>
    #include <stdlib.h>

    extern void yyerror(const char *);    
%}

%define parse.error verbose

%start program
%token HELLO BYE END

%%
program: program root_node
       | root_node
       ;

root_node: HELLO END    {printf("Hello!");}
         | BYE END      {printf("Goodbye!"); exit(0);}
         ;

%%