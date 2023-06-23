#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: (void) no return value
 */

void print_number(int n)
{
	int count = 0;
	int a = n;
	int i;
	int b = 1;
	int c;

	if (n == 0)
		count = 1;
	if (a < 0)
		a = -a;
	while (a != 0)
	{
		a = a / 10;
		count++;
		b = b * 10;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = count; i > 0; i--)
	{
		c = n / b;
		n = n - c * b;
		b = b / 10;
		_putchar(c + '0');
	}
}