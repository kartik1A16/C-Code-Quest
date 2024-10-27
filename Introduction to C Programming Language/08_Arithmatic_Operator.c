/*
ARITHMATIC OPERATOR: These operators are used to perform mathematical operations on operands.
Depending on number of operands arithmatic operators can be classified as:
    -Unary: unary plus(+a), unary minus(-), increment(++), decrement(--)
    -Binary: Addition(a+b), subtraction(a-b), multiplication(a*b), division(a/b), modulus(a%b)
*/
// Program to illustrate the arithmatic operators

#include <stdio.h>

int main()
{
    int a = 25, b = 5;
    printf("a + b = %d\n", a + b);  // Addition (Binary operator)
    printf("a - b = %d\n", a - b);  // Subtraction (Binary operator)
    printf("a * b = %d\n", a * b);  // Multiplication (Binary operator)
    printf("a / b = %d\n", a / b);  // Division (Binary operator)
    printf("a % b = %d\n", a % b);  // Modulus (Binary operator)
    printf("+a = %d\n", +a);        // Unary Plus (Unary operator)
    printf("-a = %d\n", -a);        // Unary minus (Unary operator)
    printf("a++ = %d\n", a++);      // Increment (Unary operator)
    printf("a-- = %d\n", a--);      // Decrement (Unary operator)
    return 0;
}

/*
OUTPUT:
    a + b = 30
    a - b = 20
    a * b = 125
    a / b = 5
    a % b = 0
    +a = 25
    -a = -25
    a++ = 25
    a-- = 2
*/