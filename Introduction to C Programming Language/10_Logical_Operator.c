/*
LOGICAL OPERATOR: These are used to combine two or more conditions or to 
complement the evaluation of the original condition in consideration. The 
return type is boolean
Operator: &&,\\,!
*/
// Program to illustrate the logical operators

#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a: %d\n", !a);

    return 0;
}
