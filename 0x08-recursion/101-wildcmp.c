#include <stdio.h>
#include "main.h"

int cmp_rec(char *s1, char *s2, int i, int j);
int exstr(char *s1, char s2j, int index);

/**
 * wildcmp-compare two strings
 * @s1:string to compare
 * @s2:string to compare
 * Return:1 if the strings can be considered identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	return (cmp_rec(s1, s2, 0, 0));
}

/**
 * cmp_rec:compare the strings
 * @s1:string
 * @s2:string
 * @i: index of s1
 * @j:indes of s2
 * Return: 1 if identical, else 0
 */

int cmp_rec(char *s1, char *s2, int i, int j)
{
	if (*s2)
	{
		if (s2[j] == '*')
		{
			return (cmp_rec(char *s1, char *s2, int i, int j + 1));
		}
		else
		{
			if (exstr(s1, s2[j], i) == -1)
				return (0);
			else
			{
				i = exstr(s1, s2[j], i);
				return (cmp_rec(char *s1, char *s2, int i, int j + 1));
			}
		}

	}
	else
		return (1);
}

/**
 * exstr: check if char exist in string and return vaalue
 * @s1: string
 * @s2j:character
 * @index: index of char in string
 * Return: index of char, -1 if it doesn't exist
 */

int exstr(char *s1, char *s2j, int index)
{
	if (*s1)
	{
		if (s1[index] == s2j)
		{
			return (index);
		}
		else
			return (exstr(s1, s2j, index + 1));
	}
	else
		return (-1);
}
