#include <stdio.h>
#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line.
 * @str: string to print
 * Return: (void) no return value
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = len; i >= len / 2 + 1; len--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
