#include <stdio.h>

/**
 * main - inds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if sucess
 */

int main(void)
{
	unsigned long int a = 0, b = 1, c, d;

	for (d = 0; d < 98; d++)
	{
		printf("%lu", b);

		if (d != 97)  
			printf(", ");

		c = a + b;
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
