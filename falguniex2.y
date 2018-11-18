%{
    #include <stdio.h>
    #include <stdlib.h>

    extern void yyerror( const char *);

%}

%start stmt
%token EVEN ODD

%%
stmt: stmt num
    | num
    ;

num: EVEN   {printf("even number");}
    | ODD   {printf("odd number");}
    ;

%%    