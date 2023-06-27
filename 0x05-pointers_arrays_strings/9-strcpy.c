#include <stdio.h>
#include "main.h"

/**
 * _strcpy-copies the string pointed to by src
 * @dest:  point to buffer
 * @src: string to copy
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a == 0)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
		       a++;
	}
	return (*dest);
}

