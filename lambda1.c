/*
Daniel Mecca 
CPSC 352
SDE 3 
Lambda1.c
*/
#include <stdio.h>
#include "lambda1.tab.c"
#include "lex.yy.c"
#include "yyerror1.c"


int main(int argc, char* argv[]){
	
	printf("\n");
	int parseHandler = yyparse();


	if(parseHandler!=0){
		printf("Sorry, Charlie: Not everybody can be a lambda expression!\n\n");
		return 1;
	}

	printf("Parse for syntactically correct lambda-calculus expression was successful:\n\n");
	if(flag == 1){
		printf("    The overall expression is a combination");
	}
	else if(flag == 2){
		printf("    The overall expression is a constant");
	}
	else if(flag == 3){
		printf("    The overall expression is a variable");	
	}else if(flag == 4){
		printf("    The overall expression is an abstraction");	
	}
	printf("\n");
	printf("\n");
	
	return 1;


}
