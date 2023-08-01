#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len-number of elements in a linked listint_t list.
 * @h:pointer to a linked listint_t list.
 * Return:number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
