/*
RELATIONAL OPERATOR: These are used for the comparison of the two operands
These are binary operators, return type is boolean (true or false)
Operators: <,>,<=,>=,==,!=
*/
// Program to illustrate the relational operators

#include <stdio.h>

int main()
{
    int a = 25, b = 5;
    printf("a < b  : %d\n", a < b);//Less than
    printf("a > b  : %d\n", a > b);//Greater than
    printf("a <= b: %d\n", a <= b);//less than equal to
    printf("a >= b: %d\n", a >= b);//greater than equal to
    printf("a == b: %d\n", a == b);//equal to
    printf("a != b : %d\n", a != b);//not equal to
    return 0;
}

/*
OUTPUT:
    a < b  : 0
    a > b  : 1
    a <= b: 0 
    a >= b: 1
    a == b: 0
    a != b : 1
*/