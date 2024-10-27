/*Data types specifies the type of data that the variable 
can store like integer, character, decimal, etc.
There are three types of data types
1. Primitive: int, char, float, double, void.
2. Derived: arrays, pointers, function
3. User defined:
We will only see primitive now and rest afterwards */

// Program to illustrate primitive data types.

#include <stdio.h>

int main()
{
    int a = 9;      //Integer data type
    printf("Integer %d\n", a);

    char b = 'a';   //Character data type
    printf("Character %c\n", b);

     float c = 9.0f;
    printf("Float %f\n", c); //Float data type
    
    return 0;
}

/*
OUTPUT:
    Integer 9
    Character a
    Float 9.000000
*/