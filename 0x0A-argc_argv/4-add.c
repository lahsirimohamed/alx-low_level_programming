#include <stdio.h>
#include "main.h"

/**
 * main-adds positive numbers.
 * @argc: number of args
 * @argv: array of args
 * Return: 0 if succes 1 if error
 */


int main(int argc, char *argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (isnum(argv[i]) == 1)
			{
				sum += convert(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}

/**
 * isnum-check if s contain a specific char
 * @s: string to check
 * Return:1 if nmber 0 else
 */

int isnum(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * convert-a string to integer
 * @s: string to convert
 * Return: the integer
 */

int convert(char *s)
{
	int num = 0;
	int sign = 1;
	int d = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		d = *s - '0';
		num = num * 10 + d;
		s++;
	}

	num = sign * num;
	return (num);
}


