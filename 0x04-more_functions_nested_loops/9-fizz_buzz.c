#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, fizz for 3 multip
 * buzz for 5 multip, and fizzbuzz for 3 and 5 multip
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	return (0);
}
