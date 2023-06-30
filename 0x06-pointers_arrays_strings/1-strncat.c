#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string one to concat
 * @src: string two to concat
 * @n: bytes from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		if (src[j] != 0)
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}

	dest[i] = '\0';
	return (dest);
}
