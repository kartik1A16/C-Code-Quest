// Program to illustrate multi-line comment */

#include <stdio.h>

int main(void)
{
	/*
	This is amulti-line comment
	*/

	printf("The line between '/**/' will not be executed");
	return 0;
}

/*
OUTPUT:
  The line between '//' will not be executed
*/