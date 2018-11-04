    //Example2: Understanding hello world and quit with semicolon

%{
    #include <stdio.h>
    #include <stdlib.h>
    
    void yyerror(char *);

%}

%%

"hello".*"world;" {printf("Welcome!\n");}
"quit;"                   {printf("Good Bye\n"); exit(0);}
[ \n\t]                   {;}

%%

void yyerror(char* msg){
    printf("ERROR: Couldn't parse: %s\n", msg);
}

int yywrap(void){
    return 1;
}

int main(void){
    yylex();
    return 1;
}
