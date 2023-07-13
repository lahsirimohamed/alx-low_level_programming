#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-multiplies two positive numbers.
 * @argc:number of arg
 * @argv:array of arg
 * Return:void no return value
 */


int main(int argc, char *argv[])
{
	long int a, b;

	if (argc != 3)
	{
		printf("ERROR\n");
		exit(98);
	}
	a = charint(argv[1]);
	b = charint(argv[2]);
	printf("%ld\n", a * b);
	return(0);
}

/**
 * charint-trsf a string to a number
 * @num: strin of numbers
 * Return: integer number
 */

long int charint(char *num)
{
	long int i, a = 0;

	if (num == NULL)
	{
		printf("ERROR\n");
		exit(98);
	}
	for (i = 0; num[i]; i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			a *= 10;
			a += num[i] - '0';
		}
		else
		{
			printf("ERROR\n");
			exit(98);
		}
	}
	return (a);
}

