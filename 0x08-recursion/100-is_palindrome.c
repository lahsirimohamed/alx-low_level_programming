#include <stdio.h>
#include "main.h"

/**
 * is_palindrome-returns 1 if a string is a palindrome and 0 if not
 * @s:string to test
 * Return:1 if s is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (palind(s, 0));
}

/**
 * palind-test if the string is palindrome
 * @s: string
 * @i: string char
 * Return: 0 if not, 1 if palindrome
 */

int palind(char *s, int i)
{
	if (*s)
	{
		int n = _strlen_recursion(s);

		if (i < n / 2)
		{
			if (s[i] == s[n - i - 1])
				return (palind(s, i + 1));
			else
				return (0);
		}
		return (1);
	}
	else
		return (1);
}

/**
 * _strlen_recursion-calclate the length of a string
 * @s: string
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
