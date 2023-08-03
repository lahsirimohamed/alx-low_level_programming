#include <stdio.h>
#include "main.h"

/**
 * flip_bits-number of bits you would need to flip to get from one number to another.
 * @n: number 1
 * @m:number 2
 * Return: number of bits that changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;
	unsigned long int xorop = n ^ m;
	unsigned long int xorshifted;
	int i, count = 0;

	for (i = size; i >= 0; i--)
	{
		xorshifted = xorop >> i;
		if (xorshifted & 1)
			count++;
	}
	return (count);
}

