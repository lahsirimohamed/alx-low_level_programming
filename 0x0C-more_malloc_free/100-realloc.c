#include <stdlib.h>
#include "main.h"

/**
 * _realloc-reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size:is the new size, in bytes of the new memory block
 * Return: pointer to the new memory block allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array, *ptrtst;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (array);
	}
	array = malloc(new_size);
	if (array == 0)
		return (NULL);
	ptrtst = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			array[i] = ptrtst[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			array[i] = ptrtst[i];
	}
	free(ptr);
	return (array);
}
