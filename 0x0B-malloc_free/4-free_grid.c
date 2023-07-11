#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid-frre the array
 * @grid:the array
 * @height:the height of the array
 * Return: no return value
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
