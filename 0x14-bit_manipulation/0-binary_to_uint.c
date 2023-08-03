#include <stdio.h>
#include "main.h"

/**
 * int binary_to_uint-converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars
 * Return:the converted number, or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}
	return (sum);
}
