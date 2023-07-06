#include <stdio.h>
#include "main.h"

/**
 * wildcmp-check if 2 strings are identical
 * @s1:string
 * @s2:string
 * Return: 1 if identiical, 0 otherwise
 */


int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
	{
		return (1);
	}
	else if ((*s2 == '*') && (*(s2 + 1) == '\0'))
	{
		return (1);
	}
	else if (!(*s1) || !(*s2))
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s2 != '*')
	{
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	return (0);
}
