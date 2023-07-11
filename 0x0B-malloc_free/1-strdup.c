#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup-ccopy of the string given as a parameter in a newly allocated memory
 * @str: string to copy
 * Return: a poiter to the new strin
 */


char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *nstr;
	char *len = str;

	if (str == NULL)
		return (NULL);
	while (*len)
	{
		n++;
		len++;
	}
	nstr = malloc((n + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		nstr[i] = str[i];
	nstr[n] = '\0';
	return (nstr);
}
