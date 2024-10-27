/*
BITWISE OPERATOR: These are used to perform bit-level operations. The operands are 
first converted to bit-level and then the calculation is performed on the operands. 
Mathematical operations can be performed at the bit level for faster processing.
*/
// Program to illustrate the bitwise operators

#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);

    return 0;
}

/*
OUTPUT:
    a & b: 1
    a | b: 29  
    a ^ b: 28  
    ~a: -26    
    a >> b: 0  
    a << b: 800
*/