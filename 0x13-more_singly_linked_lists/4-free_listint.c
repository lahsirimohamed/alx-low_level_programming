#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint-frees a listint_t list.
 * @head:pointer to a list
 * Return:void no return value
 */

void free_listint(listint_t *head)
{
	listint_t *tst = head;
	while (tst != NULL)
	{
		listint_t next = tst->next;
		free(tst);
		tst = next;
	}
}
