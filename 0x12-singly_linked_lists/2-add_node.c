#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node-adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer of the list_t list
 * @str: string to add
 * Return: the address of the new element, or NULL if it fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int size = 0;

	while (str[size])
		size++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = size;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
