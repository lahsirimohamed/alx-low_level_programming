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
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		if (i % 3 != 0 && i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			a = i % 10;
			b = (i - a) / 10;
			putchar(b + '0');
			putchar(a + '0');
		}
		if (i != 100)
			putchar(' ');
	}
	return (0);
}
