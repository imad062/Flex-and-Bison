%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <map>
    #include <string>
    
    using namespace std;

    #include "ex.tab.h"

    void yyerror(const char *);
%}

%%

[0-9]+		{yylval.double_val=atof(yytext); return VAL;}
[A-Za-z]+ 	{yylval.string_val=new string(yytext); return VAR;}
"+"    		{return PLUS;}
"-"    		{return MINUS;}
"*"    		{return MUL;}
"/"    		{return DIV;}
";"		{return END;}
"="             {return EQUAL;}

%%

int yywrap()
{

}

void yyerror(const char * msg)
{
	printf("ERROR: %s\n", msg);
}

int main()
{
	yyparse();
}
