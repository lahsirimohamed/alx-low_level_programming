#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list-frees a list_t list
 * @head: pointer to a list_t list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tofree = head;

	while (tofree != NULL)
	{
		list_t *next = tofree->next;

		free(tofree);
		tofree = next;
	}
}
