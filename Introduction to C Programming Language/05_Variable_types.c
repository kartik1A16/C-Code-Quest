/*
There are many types of variables depending on use, 
we will see on two types global and local
*/

/* Program to declare and print
 variables inside a function.*/

#include <stdio.h>

int x1 = 20;        // global variable
void function1()
{
    int x2 = 10;    // local variable
    printf("Local variable: %d\n", x2);
}
void function2()
{
    printf("Global variable: %d\n", x1);    // x1 can be used in this function
}

void function3() 
{
    printf("Global variable: %d\n", x1);    // Also in this function
    }

int main()
{

    function1();
    function2();
    function3();
    return 0;
}

/*
OUTPUT:
    Local variable: 10
    Global variable: 20
    Global variable: 20
*/