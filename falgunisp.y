%{
    #include <stdio.h>
    #include <stdlib.h>

    extern void yyerror(const char *);
    extern int yylex();
%}

%union{
    char str[1000];
    int int_val;
    
}

%start program
%token<str> VAR
%token<int_val> EQUAL VAL END

%%

program: program root_node
       | root_node
       ;   

root_node: VAR EQUAL VAL END    {
                                    int i;
                                    printf("GOT: %s",$1);
                                }
         ;

%%