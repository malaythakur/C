#include<stdio.h>
#define x 5+2

main()
{
    int i;
    i = x*x*x;
    printf("i is %d",i);
}


/*
OPTIONS:
A. 343
B.27
C.compile error
D.21



SOLUTION:
here x is a macro , note that here 5+2 will be not evaluated during declaration.
Thus if you are thinking that answer is 343, sorry dudh it's not correct.
-->Instead evaluation takes place like
    5+2*5+2*5+2 = 5+10+10+2 = 27

Thus, we can say [MACROS WILL NOT EVALUATE , IT WILL JUST REPLACE]
*/
