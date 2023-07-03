#include <stdio.h>
#include "main.h"

/**
 * _strchr-locates a character in a string.
 * @s: string s
 * @c: character to look for
 * Return: ointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
