#include <stdio.h>
#include "main.h"

/**
 * print_rev -prints a string, in reverse, followed by a new line.
 * @s:string to be printed
 * Return: (void) no return value
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
