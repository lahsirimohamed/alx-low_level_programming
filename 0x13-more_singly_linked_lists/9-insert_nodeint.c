#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position.
 * @head:pointer to a linked list
 * @idx:the index where we should add the node
 * @n:data n of the node
 * Return:the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tst = *head;
	listint_t *new;

	if (tst == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = tst;
		tst = new;
		return (new);
	}
	for (i = 0; i < idx && tst; i++)
	{
		if (i == idx - 1)
		{
			new->next = tst->next;
			tst->next = new;
			return (new);
		}
		else
			tst = tst->next;
	}
	return (NULL);
}
