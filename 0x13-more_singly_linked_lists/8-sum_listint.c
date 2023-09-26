#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *@head: head of the list
 *Return: eachtime, the sum of number
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor;
	int sum = 0;

	for (cursor = head; cursor != NULL; cursor = cursor->next)
	{
		sum += cursor->n;
	}

	return (sum);
}


