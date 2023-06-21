#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of all mult of 5 and 3 below 1024
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int a = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			a += i;
	}
	printf("%d\n", a);
	return (0);
}


