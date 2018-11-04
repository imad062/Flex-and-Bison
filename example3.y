    //Bison file for Example3: A program that checks whether a given number is even or odd 
%{
    #include <stdio.h>
    #include <stdlib.h>

    extern void yyerror(char *);
    extern int yylex();
%}

%union{
    int int_token;
}

%token <int_token> EVEN ODD
%start root_node

%%

root_node: EVEN {printf("Even number found\n"); return 0;}
	     | ODD  {printf("Odd number found\n"); return 0;}
	     ;

%%
