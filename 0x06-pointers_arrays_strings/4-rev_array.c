#include <stdio.h>
#include "main.h"

/**
 * reverse_array-everses the content of an array of integers.
 * @a:input
 * @n: number of elements in the array
 * Return: (void) no return value
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
