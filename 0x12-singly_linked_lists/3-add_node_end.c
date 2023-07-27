#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end-adds a new node at the end of a list_t list.
 * @head:pointer to a pointer of a list_t list
 * @str:string to add
 * Return:adress of new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *new_node;
	list_t *tst;

	while (str[size])
		size++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = size;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tst = *head;
	while (tst->next != NULL)
		tst = tst->next;
	tst->next = new_node;
	return (new_node);
}
