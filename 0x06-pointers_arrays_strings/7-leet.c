#include <stdio.h>
#include "main.h"

/**
 * leet-encodes a string into 1337.
 * @n:input
 * Return: a pointer to n
 */

char *leet(char *n)
{
	int i = 0;
	int j = 0;
	char lett[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == lett[j])
			{
				n[i] = num[j];
			}
		}
		i++;
	}
	return (n);
}
