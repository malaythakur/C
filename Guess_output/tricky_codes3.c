#include<stdio.h>
main(){
    int i =1;
    switch(i){
        case 1:
        printf("I am malay ");
        default:
        printf("I am not malay");
    }
}

/* OPTIONS:

A.compilation error
B. I am not malay
C. I am malay
D. I am malay I am not malay



HINTS:
BREAK IS NOT COMPULSORY. -> THUS NO COMPILATION ERROR
-> Break stops the flow after the case is matched.

SOLUTIONS:
-> since here is no break statement , and the condition is
matched it keeps printing the cases.
Thus, Option D is true.
-> this condition is called fallthrough in switch case
*/