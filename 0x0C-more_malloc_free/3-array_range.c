#include <stdlib.h>
#include "main.h"

/**
 * array_range-creates an array of integers.
 * @min:min value of int in the array
 * @max:max value of int in the array
 * Return:the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
