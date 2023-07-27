#include "lists.h"
#include <stdio.h>

/**
 * print_list-prints all the elements of a list_t list.
 * @h:pointer to ingly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nod;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nod++;
	}
	return (nod);
}
