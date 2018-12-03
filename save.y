%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    extern void yyerror(const char *);
    extern int yylex();    

%}

%union{
    char p[1000];
}

%start program
%token <p> VAR 
%token VAL

%%
program: program root_node
       | root_node
       ;
root_node: VAR VAL  {
                        printf("%s\n",$1);
                        printf("%d\n",$2);
                    }
         ;
%%
