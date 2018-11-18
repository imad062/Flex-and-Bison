%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <map>
    #include <string>

    using namespace std;
    
    map<string, double> sym;

    extern void yyerror(const char *);
    extern int yylex();
%}

%union{
    double double_val;
    string* string_val;
}

%define parse.error verbose
%start program

%token <double_val> EQUAL VAL PLUS MINUS MUL DIV END
%token <string_val> VAR

%type <double_val> expr

%%

program: program root_node
       | root_node
       ;

root_node: stat END
	 | expr END		{printf("Answer: %f\n", $1);}
	 | VAR END		{printf("Value: %f\n", sym[*$1]);}
	 ;

expr: expr PLUS expr		{$$=$1+$3;}
    | expr MINUS expr		{$$=$1-$3;}
    | expr MUL expr		{$$=$1*$3;}
    | expr DIV expr		{$$=$1/$3;}
    | VAL      			{$$=$1;}
    | VAR			{$$=sym[*$1];}
    ;

stat: VAR EQUAL expr		{sym[*$1]=$3;}
    ;

%%
