#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2-frees a listint_t list, and sets the head to NULL
 * @head:double pointer to a linked list
 * Return: void no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *tst = *head;

	if (head == NULL)
		return;
	while (tst != NULL)
	{
		listint_t *next = tst->next;

		free(tst);
		tst = next;
	}
	*head = NULL;
}
