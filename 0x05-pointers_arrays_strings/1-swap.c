#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: a pointer dereference for changing the value of the variable a
 * @b: a pointer deference for changing the value of the variable b
 * int c: assigning the address of the variable a to c
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
