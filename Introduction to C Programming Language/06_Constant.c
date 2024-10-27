/*Constant are variables whose values cannot be
 modified once they are declared in the C program
 SYNTAX: const data_type var_name = data_value
 */


// Program to illustrate constant variable definition

#include <stdio.h>

int main()
{

    // defining integer constant using const keyword
    const int c1 = 25;

    // defining character constant using const keyword
    const char c2 = 'A';

    // defining float constant using const keyword
    const float c3 = 15.66;

    printf("Integer Constant: %d\n",c1);
    printf("Character Constant: %c\n",c1);
    printf("Float Constant: %f",c3);

    return 0;
}

/*
OUTPUT:
    Integer Constant: 25
    Character Constant: A
    Float Constant: 15.660000
*/