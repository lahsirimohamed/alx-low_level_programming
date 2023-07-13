#include <stdlib.h>
#include "main.h"

/**_calloc- allocates memory for an array, using malloc
 * @nmemb:size of array
 * @size:size of each element in array
 * Return:pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}

