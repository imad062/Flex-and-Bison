%{
    #include <stdio.h>
    #include <stdlib.h>
    
    extern yyerror( const char *);
%}

%start stmt
%token NUM PLUS MINUS MUL DIV


%%

stmt: stmt expr       { printf("%d",$2);}
    | expr            { printf("%d",$1);}
    ;

expr: NUM               {$$=$1;}
    | expr expr PLUS    {$$=$1+$2;}
    | expr expr MINUS   {$$=$1-$2;}
    | expr expr MUL     {$$=$1*$2;}
    | expr expr DIV     {$$=$1/$2;}
    ;

%%