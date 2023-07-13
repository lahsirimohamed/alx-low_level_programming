#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked-allocates memory using malloc
 * @b:size of allocated memory
 * Return:pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *tst;

	tst = malloc(b);
	if (tst == NULL)
		exit(98);
	return (tst);
}
