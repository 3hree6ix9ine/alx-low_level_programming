#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the current node
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		listint_t *temp = current_node;

		current_node = current_node->next;
		free(temp);
	}
}

