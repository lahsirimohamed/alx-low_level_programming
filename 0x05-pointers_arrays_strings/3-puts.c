#include <stdio.h>
#include "main.h"

/**
 * _puts-prints a string, followed by a new line
 * @str:string to print
 * Return:(void) no return value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
