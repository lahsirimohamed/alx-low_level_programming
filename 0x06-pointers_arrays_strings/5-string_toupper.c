#include <stdio.h>
#include "main.h"

/**
 * string_toupper-changes all lowercase letters of a string to uppercase.
 * @n: pointer to a string
 * Return: poiter to a string with uppercase
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - '32';
		}
		i++;
	}
}
