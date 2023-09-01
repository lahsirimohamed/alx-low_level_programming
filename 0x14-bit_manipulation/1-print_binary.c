#include <stdio.h>
#include "main.h"

/**
 * print_binary-the binary representation of a number
 * @n:number
 * Return:void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8 - 1;
	int i, flag = 0;
	unsigned long int nshifted;

	for (i = size; i >= 0; i--)
	{
		nshifted = n >> i;
		if (nshifted & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag != 0)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
}

