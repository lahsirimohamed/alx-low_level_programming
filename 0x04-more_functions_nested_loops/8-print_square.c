#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 * Return: (void) no return value
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

