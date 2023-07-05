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

