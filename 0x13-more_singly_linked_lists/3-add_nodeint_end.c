#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: the first element
 * @n: element
 * Return: eachtime, new node, or NULL if it fails
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *cursor = *head;

		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}

		cursor->next = new_node;
	}

	return (new_node);
}




