#include "lists.h"
#include <stddef.h>

/**
 * list_len-number of elements in a linked list_t list.
 * @h: pointer to a linked list_t list.
 * Return:number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}

