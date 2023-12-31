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

	while (*head != NULL)
	{
		nxt_tmp = (*head)->next;
		(*head)->next = ant_tmp;
		ant_tmp = *head;
		*head = nxt_tmp;
	}
	*head = ant_tmp;
	return (*head);
}
