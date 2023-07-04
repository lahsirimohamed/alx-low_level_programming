#include <stdio.h>
#include "main.h"

/**
 * print_diagsums-the sum of the two diagonals of a square matrix of integers.
 * @a: diagonals of a square matrix of integers.
 * @size: the size of diagonals
 * Return: void no return value
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n = 0;
	int m = 0;

	for (i = 0; i < size; i++)
	{
		n += a[i * size + i];
		m += a[i * size + (size - i - 1)];
	}
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(m + '0');
}
