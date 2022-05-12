#include<stdio.h>
main(){
    int n = 65;
    switch(n){
        case 64:
        printf("Case 64\n");
        break;
        case 'A':
        printf("case A \n");
        break;
        default:
        printf("default case \n");
    }
}

/*
OPTIONS

A. case 64
B. case A
C. default case 
D. Compiler Error: Incompatible datatypes in case label
and switch expression.

*/

/* SOLUTION:
option B -> case A will be printed since ASCII value of 65 
is A. 
Thus , we can say that
// Char to int and viceversa automatic type casting is done
*/