#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint-sum of all the data (n) of a listint_t linked list.
 * @head:pointer to a linked list
 * Return:if the list is empty, return 0, else the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tst = head;

	if (head == NULL)
		return (0);
	while (tst != NULL)
	{
		sum += tst->n;
		tst = tst->next;
	}
	return (sum);
}
