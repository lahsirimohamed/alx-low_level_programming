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
	int a;
	int len = 0;

	while (str[len] != '\0')
	{
		len++
	}
	if (len % 2 != 0)
		a = (len + 1) / 2;
	else
		a = len / 2;

	for (i = a; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
