#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: Head of the list
 * @str: String to add to the new node
 * Return: Address of the new node, or NULL if memory allocation fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

