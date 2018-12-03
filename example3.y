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
%start program

%%

program: program root_node
       | root_node
       ;

root_node: EVEN {printf("Even number found\n");}
	     | ODD  {printf("Odd number found\n");}
	     ;

%%
