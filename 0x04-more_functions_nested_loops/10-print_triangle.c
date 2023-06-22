#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:size of the triangle
 * Return:(void) no return value
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i + 1; j <= size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	return (0);
}

