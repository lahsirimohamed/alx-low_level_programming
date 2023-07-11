#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array-creates an array of chars, and initializes it
 * @size:size of array
 * @c: specific char
 * Return: pointer to the array
 */


char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		free(ar);
		return (0);
	}
	ar[0] = c;
	return (ar);
}
