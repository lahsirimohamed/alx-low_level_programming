#include <stdio.h>
#include "main.h"

/**
 * _strspn- the length of a prefix substring.
 * @s: string
 * @accept : set of char to search for
 * Return: he number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	while (s[i] >= '\0')
	{
		j = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
		}
		i++;
	}
	return (len);
}

