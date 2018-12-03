    //Example4: A simple calculator program
%{
    #include <stdio.h>
    #include <stdlib.h>
    
    extern void yyerror(const char *);
%}

%union{
    double double_val;
}

%define parse.error verbose

%token <double_val> PLUS MINUS MUL DIV LPAREN RPAREN END NUM

%type <double_val> expr root_node program

%start program

%%

program: program root_node
       | root_node
       ;

root_node: expr END	{printf("Answer: %f\n", $1);}
	 ;

expr: LPAREN expr RPAREN	{$$=$2;}
    | expr PLUS expr		{$$=$1+$3;}
    | expr MINUS expr		{$$=$1-$3;}
    | expr MUL expr		{$$=$1*$3;}
    | expr DIV expr		{$$=$1/$3;}
    | NUM     			{$$=$1;}
    ;

%%
