#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *  followed by a new line.
 *  Return: (void) no return value
 */

void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = j % 10;
			if (j > 9)
				_putchar('1');
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
