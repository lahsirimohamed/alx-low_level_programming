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
		return (NULL);
	char *ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	int i;

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
