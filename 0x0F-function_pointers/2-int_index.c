#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index-searches for an integer.
 * @array:integers
 * @size:of the array
 * @cmp:pointer to the function to be used to compare valyes
 * Return:index of the first element of cmp, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0, i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
