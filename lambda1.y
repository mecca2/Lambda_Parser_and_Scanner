/*
Daniel Mecca 
CPSC 352
SDE 3 
Lambda1.y
*/
%{ 
	int yylex(void);
	int yyerror(char*);
	/* Initialize flag to 0, flag used to distinguish outputs*/
	int flag = 0;
%}


%token LAMBDA 
%token LPARENS
%token RPARENS
%token PERIOD
%token VARIABLES
%token INTEGER
%token FUNCTION

%%


expression: combination 		{flag = 1;} 	
		| constant 				{flag = 2;}
		| VARIABLES 			{flag = 3;} 
		| abstraction 			{flag = 4;}
	
;

constant: FUNCTION | INTEGER ;

combination: LPARENS expression expression RPARENS ;

abstraction: LPARENS LAMBDA VARIABLES PERIOD expression RPARENS;

%%