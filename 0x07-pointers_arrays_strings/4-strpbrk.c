#include <stdio.h>
#include "main.h"

/**
 * _strpbrk-searches a string for any of a set of bytes
 * @s: string to test
 * @accept:string to match
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
