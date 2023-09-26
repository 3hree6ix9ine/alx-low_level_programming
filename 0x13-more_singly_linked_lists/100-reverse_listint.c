#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: first node in the list
 * Return: eachtime, first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ant_tmp = NULL;
	listint_t *nxt_tmp = NULL;
	listint_t *current = *head;

	for (; current != NULL; current = nxt_tmp)
	{
		nxt_tmp = current->next;
		current->next = ant_tmp;
		ant_tmp = current;
	}

	*head = ant_tmp;
	return (*head);
}

