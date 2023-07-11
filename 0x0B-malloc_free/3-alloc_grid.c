#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid-eturns a pointer to a 2 dimensional array of integers.
 * @width:the width of the 2 dim array
 * @height:the height of the 2 dim array
 * Return: poiter to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

