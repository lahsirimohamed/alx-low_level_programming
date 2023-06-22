#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, fizz for 3 multip
 * buzz for 5 multip, and fizzbuzz for 3 and 5 multip
 * Return: 0 if success
 */

int main(void)
{
	int i, a, b;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		if (i % 3 != 0 && i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			a = i % 10;
			b = (i - a) / 10;
			_putchar(b + '0');
			_putchar(a + '0');
		}
		if (i != 100)
			_putchar(' ');
	}
	return (0);
}
