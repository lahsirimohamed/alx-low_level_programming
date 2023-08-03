#include <stdio.h>
#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: of the bit to clear
 * Return:1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;

	if (index > size)
		return (-1);
	*n = (~(1UL << index) | *n);
	return (1);
}
