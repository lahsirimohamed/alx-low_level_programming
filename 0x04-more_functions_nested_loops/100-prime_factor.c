#include <stdio.h>

/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0 if success
 */

int main(void)
{
	long int i = 3;
	long int a = 612852475143;
	long int b;

	while (i * i <= a)
	{
		while (a % i == 0)
		{
			b = i;
			a = a / i;
		}
		i += 2;
	}
	if (a > 2 && a > b)
	{
			b = a;
	}
	printf("the largest prime factor of the number 612852475143 is :%ld\n", b);
	return (0);
}


