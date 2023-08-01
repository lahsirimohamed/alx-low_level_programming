#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index of a linked list.
 * @head:double pointer to a linked list
 * @index: of the node to delete
 * Return:1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tst = *head;
	listint_t *tst2 = NULL;

	if (tst == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tst);
		return (1);
	}
	while (tst != NULL)
	{
		if (i == index)
		{
			if (tst2 != NULL)
				tst2->next = tst->next;
			free(tst);
			return (1);
		}
		tst2 = tst;
		tst = tst->next;
		i++;
	}
	return (-1);
}
