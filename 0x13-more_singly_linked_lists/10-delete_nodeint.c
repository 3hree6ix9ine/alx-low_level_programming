#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list.
 * @head: the head of node in the list
 * @index: the index node to delete
 * Return: eachtime, 1 success, else -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int count = 0;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	do	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		if (count == index - 1)
		{
			listint_t *eraser = tmp->next->next;

			free(tmp->next);
			tmp->next = eraser;
			return (1);
		}

		tmp = tmp->next;
		count++;
	} while (tmp);

	return (-1);
}

