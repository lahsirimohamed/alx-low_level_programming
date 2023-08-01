#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint-deletes the head node of a listint_t linked list
 * @head:double pointer to a linked list
 * Return:head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tst;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tst = (*head)->next;
	free(*head);
	*head = tst;

	return (data);
}
