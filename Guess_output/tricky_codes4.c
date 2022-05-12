#include<stdio.h>
main(){
    int i=2;
    switch (i){
        case 1:
        printf("Hey .. \n");
        case 2:
        printf("What's up \n");
        case 3:
        printf("I am good , thanks for asking \n");
        default:
        printf("It was great meeting with you ");
    }
}

/*
Guess the output:







SOLUTIONS:
prints all the conditions except case 1 as n starts from 2.

LEARNING POINT.
Use break after each case.
*/