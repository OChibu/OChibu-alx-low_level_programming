#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

