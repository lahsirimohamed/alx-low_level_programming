#include <stdio.h>
#include "main.h"

/**
 * _strncpy-copies a string.
 * @dest: where to copy characters
 * @src: the string source
 * n: max num of char
 * Return:pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
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
