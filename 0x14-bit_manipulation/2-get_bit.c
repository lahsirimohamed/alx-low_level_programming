#include <stdio.h>
#include "main.h"

/**
 * get_bit-returns the value of a bit at a given index.
 * @n:number
 * @index:of the bit
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int size = sizeof(unsigned long int) * 8 - 1;
	int nshifted;

	if (index > size)
		return (-1);
	nshifted = (n >> index) & 1;
	return (nshifted);
}
