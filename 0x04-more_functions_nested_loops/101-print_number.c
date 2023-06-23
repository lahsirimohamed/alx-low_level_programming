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

	if (n == 0)
		count = 1;
	if (a < 0)
		a = -a;
	while (a != 0)
	{
		a = a / 10;
		count++;
	}
	if (n < 0)
		_putchar('-');
	for (i = count; i > 0; i--)
	{
		a = n / (i * 10);
		_putchar(a + '0');
	}
}
