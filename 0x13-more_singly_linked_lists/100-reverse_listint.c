#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint-reverses a listint_t linked list.
 * @head:double pointer to a linked list
 * Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *up = NULL;
	listint_t *down = NULL;

	while (*head)
	{
		up = (*head)->next;
		(*head)->next = down;
		down = *head;
		*head = up;
	}
	*head = down;
	return (*head);
}
