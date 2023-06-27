#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to rerverse
 * Return: (void) no return value.
 */

void rev_string(char *s)
{
	int len = 0;
	char *f = s;
	char *e = s;
	char mid;

	while (*e != '\0')
	{
		len++;
		e++;
	}

	e--;

	while (f < e)
	{
		mid = *f;
		*f = *e;
		*e = mid;
		f++;
		e--;
	}
}
