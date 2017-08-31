
# Description: 
Create a parser, scanner, and c file to verify a lambda 
equation. The parser is created with bison and scanner is in c. 

## Files Include: 

- lambda1.c: contains file with flags that are set with in bison file. 

- lambda1.y: bison file containing all grammars for which the function must 
abide to and error handing incorrect arguements. 

- lambda1.in: flex file containing all of the values that can be associated
with each variable. Return the name of the token so the .y file can use
these values. 

- lambda1.log: log file containing test cases and the output after execution

## Files Not-Include:
runLam.sh : file that compiles all of the flex and bison files together and 
creates an executable to run function.




