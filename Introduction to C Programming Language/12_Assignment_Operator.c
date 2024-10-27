/*
ASSIGNMENT OPERATOR:These are used to assign value to a variable.
*/
// Program to illustrate the assignment operators
#include <stdio.h>

int main()
{
    int a = 25, b = 5;
    printf("a = b: %d\n", a = b);
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %%= b: %d\n", a %= b);
    printf("a &= b: %d\n", a &= b);
    printf("a |= b: %d\n", a |= b);
    printf("a >>= b: %d\n", a >>= b); 
    printf("a <<= b: %d\n", a <<= b);

    return 0;
}

/*
OUTPUT:
    a = b: 5
    a += b: 10
    a -= b: 5
    a *= b: 25
    a /= b: 5
    a %= b: 0
    a &= b: 0
    a |= b: 5
    a >>= b: 0
    a <<= b: 0
*/