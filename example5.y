%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    using namespace std;
    
    extern int yylex();
    extern void yyerror(const char *);
%}

%define parse.error verbose

%union{
    int int_val;
    double double_val;
    string* string_val;
}

%token <double_val> VAL OP
%type <double_val> root_node
%start program

%%

program: program root_node
       | root_node
       ;

root_node: VAL VAL OP		{printf("%f %f %s", $1, $2, $3);}
	 ;

%%
