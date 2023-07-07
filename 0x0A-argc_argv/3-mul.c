#include <stdio.h>
#include "main.h"

/**
 * main-multiplication two numbers
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if success 1 if error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result = convert(argv[1]) * convert(argv[2]);

		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}

/**
 * convert-convert a string to integer
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
