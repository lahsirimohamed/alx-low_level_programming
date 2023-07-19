#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-functin as a parameter on each element of an array.
 * @array:array where the fun will be executed
 * @size:of the array
 * @action:pointer to the function you need to use
 * Return: no return value
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
