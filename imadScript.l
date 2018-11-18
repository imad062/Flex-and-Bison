%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "imadScript.tab.h"

    void yyerror(const char *);
    int yywrap();    
%}


%%

[0-9]+                          { yylval.double_val = atof(yytext); printf("VAL\n"); return VAL;}
[0-9]+"."[0-9]+                 { yylval.double_val = atof(yytext); printf("VAL\n"); return VAL;}
[A-Za-z_]+[a-zA-Z_0-9]*         {   
                                    int i;
                                    /*yylval.input_var_string[0] = '\0';
                                    for(i = 0; i < 100; i++)
                                    {
                                        yylval.input_var_string[i] = '\0';
                                    }*/
                                    memset(&yylval.input_var_string[0], 0, sizeof(yylval.input_var_string));
                                    printf("input_var_string BEFORE: %s\n",yylval.input_var_string);
                                    for(i = 0; i < strlen(yytext); i++)
                                    {
                                        yylval.input_var_string[i] = yytext[i];
                                    }
                                    printf("input_var_string AFTER: %s\n",yylval.input_var_string);
                                    printf("VAR   %s\n",yytext); return VAR;
                                }
"<ii>"                          {printf("DEC\n"); return DEC;}
"<id>"                          {printf("DEC\n"); return DEC;}
"<+>"                           {printf("ADD\n"); return ADD;}
"<->"                           {printf("SUB\n"); return SUB;}
"<*>"                           {printf("MUL\n"); return MUL;}
"</>"                           {printf("DIV\n"); return DIV;}
"<=>"                           {printf("EQUAL\n"); return EQUAL;}
"<;>"                           {printf("END\n"); return END;}
"<(>"                           {printf("LFB\n"); return LFB;}
"<)>"                           {printf("RFB\n"); return RFB;}
", "                            {printf("COM\n"); return COM;}
"<print>"                       {printf("PRINT\n"); return PRINT;}
"<all>"                         {printf("ALL\n"); return ALL;}

[0-9]+[A-Za-z0-9_]+             {printf("SyntaxError: Invalid Variable Name \n");}
[ \n\t]                         { ;}

%%


int yywrap(){

}

void yyerror(const char *msg){
    printf("ParseError: %s", msg);
}

int main(){
    yyparse();
}