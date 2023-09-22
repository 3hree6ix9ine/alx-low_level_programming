#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: Head of the list
 * @str: String to add to the new node
 * Return: Address of the new node, or NULL if memory allocation fails
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}

