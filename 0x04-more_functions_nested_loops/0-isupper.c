#include <stdio.h>
#include "main.h"

/**
 * main - checks for uppercase character
 * @c: the letter to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
