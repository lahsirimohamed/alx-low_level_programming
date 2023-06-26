#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: value to swap
 * @b: value to swap
 * Return: (void) no return value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
