    //Bison file for Example7: Calculator v2
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include <map>
    using namespace std;

    map<string, double> sym;
    
    extern int yylex();
    extern void yyerror(const char *);
%}

%union{
    int int_val;
    double double_val;
    string* string_val;
}

%define parse.error verbose

%start program

%token <int_val> PLUS MINUS MUL DIV EQUAL LPAREN RPAREN END
%token <double_val> VAL
%token <string_val> VAR  

%type <double_val> expression

%%

program: program root_node
       | root_node
       ;

root_node: expression END		{printf("Answer: %f\n", $1);}
	 | statement END
	 | VAR END			{printf("Value: %f\n", sym[*$1]);}
	 ;

expression: LPAREN expression RPAREN	{$$=$2;}
	  | expression PLUS expression	{$$=$1+$3;}
	  | expression MINUS expression	{$$=$1-$3;}
	  | expression MUL expression	{$$=$1*$3;}
	  | expression DIV expression	{$$=$1/$3;}
      | VAR				            {$$=sym[*$1];}
	  | VAL				            {$$=$1;}
	  | MINUS VAL			        {$$=-$2;}
	  ;

statement: VAR EQUAL expression {sym[*$1]=$3;}
	 ;
%%

