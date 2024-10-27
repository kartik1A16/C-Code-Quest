/*
A variable is the name associated with some
 memory location to store data of different types
 SYNTAX: data_type var_name = data_value;
 */


/* Program to demonstrate declaration,
 definition and initialization of variables*/

#include <stdio.h>

int main()
{
    int v1;         // declaration and definition of variable
    v1 = 12;        // assignment

    int v2 = 25;    // declaration, definition and initialization

    printf("v1: %d\n", v1);
    printf("v2 %d", v2);

    return 0;
}

/*
OUTPUT:
    v1: 12
    v2 25
*/