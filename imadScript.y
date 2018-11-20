%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    //sym holds the variables, so basically maximum variable declaration is set to 1000 for now
    char sym[1000][1000];
    //values hold the corresponding values of variables according to index
    //for example values[0] hold the values for the variable contained in sym[0][]
    int values[1000];

    float ifOpValues[1000];

    int currentIfOp = 0;

    int current = 0;

    char dump;

    char input[1000];
    int inval;

    int choice;

    int matchedStringValue = 0;

    int wasItDeclaredBefore(char string[1000]);
    int matchStrings(char string1[1000], char string2[1000]);
    int getIndexNumber(char string[1000]);
    void pushIfOpValues(float );
    void resetIfOpValues();
    void printIfOpValues();

    extern void yyerror(const char *);
    extern int yylex();
%}

%union{
    int int_val;
    double double_val;
    char input_var_string[1000];
}

%start program
%token <double_val> ADD SUB MUL DIV GRE LES GEQ LEQ END VAL LFB RFB PRINT EQUAL DEC COM ALL IIF STMT EIF NDF LTB RTB DFLT
%token <input_var_string>   VAR
%type <double_val> expression
%type <double_val> ifelse

%%

program: program root_node 
       | root_node 
       ;

root_node: expression END                                       { printf("Expression: %f\n", $1); }
         | statement END                                        { ; }
         | ifelse
         ;

expression: expression GRE expression                           { $$ = $1 > $3; }
          | expression LES expression                           { $$ = $1 < $3; }
          | expression GEQ expression                           { $$ = $1 >= $3; }
          | expression LEQ expression                           { $$ = $1 <= $3; }
          | expression ADD expression                           { $$ = $1 + $3; }
          | expression SUB expression                           { $$ = $1 - $3; }
          | expression DIV expression                           { $$ = $1 / $3; }
          | expression MUL expression                           { $$ = $1 * $3; }
          | LFB expression RFB                                  { $$ = $2; }
          | VAL                                                 { $$ = $1; }
          ;

statement: VAR EQUAL expression                                 {
                                                                    
                                                                    int result;
                                                                    result = wasItDeclaredBefore($1);

                                                                    if(result == 0)
                                                                    {
                                                                        printf("Wasn't declared before\n");
                                                                    }
                                                                    else{
                                                                        printf("declared before\n");

                                                                        int indexOfVar = getIndexNumber($1);
                                                                        values[indexOfVar] = $3;

                                                                    }    

                                                                    
                                                                }
         | PRINT VAR                                            {
                                                                    
                                                                    int result1;
                                                                    result1 = wasItDeclaredBefore($2);

                                                                    if(result1 == 0)
                                                                    {
                                                                        printf("Wasn't declared before\n");
                                                                        
                                                                    }
                                                                    else{
                                                                        //this works because wasItDeclaredBefore automatically sets 
                                                                        //the matchedStringValue to the value if the variable already
                                                                        //exists
                                                                        printf("Var value: %d\n", matchedStringValue);
                                                                    }    
                                                                }
         | VAR EQUAL VAR                                        {
                                                                    int result1;
                                                                    result1 = wasItDeclaredBefore($1);

                                                                    int result2;
                                                                    result2 = wasItDeclaredBefore($3);

                                                                    if(result1 == 0)
                                                                    {
                                                                        printf("%s not declared before\n",$1);
                                                                    }
                                                                    else if(result2 == 0)
                                                                    {
                                                                        printf("%s not declared before\n",$3);
                                                                    }
                                                                    else
                                                                    {
                                                                        int indexOfRight = getIndexNumber($3);
                                                                        int indexOfLeft = getIndexNumber($1);

                                                                        values[indexOfLeft] = values[indexOfRight];
                                                                    }

                                                                
                                                                }
         | PRINT ALL                                            {
                                                                    printf("Printing symbol and value table:\n\n");
                                                                    int i;
                                                                    for(i = 0; i < current; i++)
                                                                    {
                                                                        printf("Variable: %s    Value: %d \n",sym[i], values[i]);
                                                                    }
                                                                    printf("\n\n");
                                                                }
         | declaration                                  
         ;

declaration: DEC vari                                           
           ;

vari: vari COM vari                                             {printf("Multiple declaration\n");}
    | VAR                                                       {
                                                                    int result;
                                                                    result = wasItDeclaredBefore($1);
                                                                    printf("$1: %s\n",$1);
                                                                    if(result == 0)
                                                                    {
                                                                        printf("Wasn't declared before\n");
                                                                        //store the values as input
                                                                        for(int i = 0; i < strlen($1) ; i++)
                                                                        {
                                                                            sym[current][i] = $1[i];
                                                                        }
                                                                        values[current] = 0;

                                                                        //increase current 
                                                                        current++;
                                                                    }
                                                                    else{
                                                                        printf("declared before\n");
                                                                        
                                                                    } 
                                                                }
    ;

ifelse: IIF LTB expression RTB ifelse                           {
                                                                    printf("Condition Result: %f\n",$3);
                                                                    if($3)
                                                                    {
                                                                        printIfOpValues();
                                                                    }
                                                                    resetIfOpValues();
                                                                }
      | IIF LTB expression RTB STMT expression END EIF LTB expression RTB STMT expression END DFLT LTB RTB STMT expression NDF {

                                                                    if($3)
                                                                    {
                                                                        printf("IF \nCondition Result: %f\nExpression Result: %f\n", $3, $6);
                                                                    }
                                                                    else if($10)
                                                                    {
                                                                        printf("ELSE IF \nCondition Result: %f\nExpression Result: %f\n", $10, $13);
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("DEFAULT \nExpression Result: %f\n", $19);
                                                                    }

                                                                }       
      | STMT expression END ifelse                              {
                                                                    pushIfOpValues($2);
                                                                }
      | NDF
      ;

%%

int wasItDeclaredBefore(char string[1000])
{
    printf("WIDB: ArgumentString: %s %d\n", string, strlen(string));
    //returns 0 if not delcared before
    //returns 1 if declared before
    int i;
    for(i = 0; i < current; i++)
    {
        printf("WIDB: symString: %s symLength: %d  Value: %d  i: %d   current: %d\n", sym[i], strlen(sym[i]), values[i], i, current);
        if(strlen(string) == strlen(sym[i]))
        {
            int result2;
            result2 = matchStrings(string, sym[i]);
            if(result2 == 1)
            {
                //string matched => return 1
                //set the gloval value variable to the actual value
                matchedStringValue = values[i];
                return 1;
            }
            else
            {
                //string not matched => continue to next string
                continue;
            }
        }
        else
        {
            continue;
        }
    }

    //no string has been matched => return 0
    return 0;
}

int matchStrings(char string1[1000], char string2[1000])
{
    //returns 1 if match
    //returns 0 if not match
    int len;
    len = strlen(string1);

    int i;
    for(i = 0; i < len; i++)
    {
        if(string1[i] == string2[i])
        {
            //if match => continue searching
            continue;
        }
        else
        {
            //if not match => return 0
            return 0;
        }
    }

    //for loop ended => matched the strings
    return 1;
}

int getIndexNumber(char string[1000])
{
    int i;
    for(int i = 0; i < current; i++)
    {
        printf("GIN: input: %s  symstr: %s\n",string,sym[i]);
        //check if input and sym[i] has same length
        //because, by default matchStrings() takes that its two argument strings have same length
        if(strlen(string) == strlen(sym[i]))
        {
            if(matchStrings(string, sym[i]))
            {
                printf("GIN: %d\n",i);
                return i;
            }
        }
        
    }
}

void pushIfOpValues(float value)
{
    ifOpValues[currentIfOp] = value;
    currentIfOp++;
}

void printIfOpValues()
{
    int i;
    for( i = currentIfOp-1; i >= 0; i--)
    {
        printf("%f\n",ifOpValues[i]);
    }
}

void resetIfOpValues()
{
    memset(&ifOpValues[0], 0, sizeof(ifOpValues));
    currentIfOp = 0;
}