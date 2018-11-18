%{
  #include <stdio.h>
  #include <stdlib.h>
  extern int yylex();
  extern void yyerror(const char *);
%}

%define parse.error verbose

%start program

%token NUM PLUS 

%%

program: program statement {printf("r: %f", $2);}
       | statement {$$=$1; printf("value: %f", $1);}
       ;

statement: NUM PLUS NUM {$$=$1+$3; printf("st: %i", $$);}
         ;

%%
