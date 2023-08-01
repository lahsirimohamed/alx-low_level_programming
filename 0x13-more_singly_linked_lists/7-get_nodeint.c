#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index-the nth node of a listint_t linked list.
 * @head:pointer to a linked list
 * @index:index of the node, starting at 0
 * Return:node or NUll if does not exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tst = head;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (tst);
	while (i < index)
	{
		if (tst->next == NULL)
			return (NULL);
		tst = tst->next;
		i++;
	}
	return (tst);
}
