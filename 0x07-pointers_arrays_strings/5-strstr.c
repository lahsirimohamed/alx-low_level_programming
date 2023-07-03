#include <stdio.h>
#include "main.h"

/**
 * _strstr-locates a substring.
 * @haystack: string to look in for needle
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*n == *h && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
