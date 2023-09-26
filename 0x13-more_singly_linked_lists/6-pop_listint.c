#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: the head at the start of list
 * Return: eachtime, data in the node
 */

int pop_listint(listint_t **head)
{
	int data_ret = 0;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	data_ret = tmp->n;
	*head = tmp->next;
	if (tmp != NULL)
	{
		free(tmp);
		return (data_ret);
	}
	return (data_ret);
}
