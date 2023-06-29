#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to concat
 * @src: string to concat
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
