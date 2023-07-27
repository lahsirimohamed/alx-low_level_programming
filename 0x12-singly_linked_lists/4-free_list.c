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
	list_t *tofree;

	while (head != NULL)
	{
		tofree = head;
		head = head->next;
		free(tofree->str);
		free(tofree);
	}
}
