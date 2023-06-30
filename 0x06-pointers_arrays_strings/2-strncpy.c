#include <stdio.h>
#include "main.h"

/**
 * _strncpy-copies a string.
 * @dest: where to copy characters
 * @src: the string source
 * @n: max num of char
 * Return:pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		else
			break;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
