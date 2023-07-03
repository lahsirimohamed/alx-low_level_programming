#include <stdio.h>
#include "main.h"

/**
 * _memset-fills memory with a constant byte.
 * @s: pointer to the memorry area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (s[i] != '\0')
		{
			s[i] = b;
		}
	}
	return (s);
}
