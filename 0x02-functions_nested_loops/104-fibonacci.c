#include <stdio.h>

/**
 * main - inds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if sucess
 */

int main(void)
{
	unsigned long int a = 1, b = 1, c, d;

	for (d = 0; d < 90; d++)
	{
		printf("%lu", b);

		if (d != 97)
			printf(", ");

		c = a + b;
		a = b;
		b = c;
	}

	unsigned long int e = a % 1000000000;
	unsigned long int f = b % 1000000000;
	unsigned long int sum = (a + b) / 1000000000;

	for (d = 90; d < 98; d++)
	{
		printf(", %lu", e + f);

		unsigned long int y = e;

		y = f;
		f = (y + f + sum) % 100000000;
		carry = (y + f + sum) / 1000000000;
	}
	printf("\n");
	return (0);
}
