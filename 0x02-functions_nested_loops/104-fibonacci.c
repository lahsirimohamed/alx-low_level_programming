#include <stdio.h>

/**
 * main - inds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if sucess
 */

int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int l = 1000000000;
	unsigned long int c;
	unsigned long int d;
	unsigned long int e;
	unsigned long int j;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}

	c = (a / l);
	d = (a % l);
	e = (b / l);
	j = (b % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", e + (j / l));
		printf("%lu", j % l);
		e = e + c;
		c = e - c;
		j = j + d;
		d = j - d;
	}
	printf("\n");
	return (0);
}
