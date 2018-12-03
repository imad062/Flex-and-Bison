    //Example1.l: A program that recognizes characters and digits
%{
    #include <stdio.h>
    #include <stdlib.h>
    
    void yyerror(char *);
    
%}

%%

[A-Za-z]{1} {printf("Character Found: %s\n", yytext);}
[0-9]{1}    {printf("Digit Found: %s\n", yytext);}    
[ \n\t]+    {;}

%%

void yyerror(char* msg){
    printf("ERROR: Couldn't parse: %s", msg);
}

int yywrap(void){
    
}

int main(void){
    yylex();
}
