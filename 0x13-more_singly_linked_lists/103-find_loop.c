#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: first head in list
 * Return: eachtime, where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	do	{
		if (fast == NULL || fast->next == NULL)
			return (NULL);

		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	} while (slow);

	return (NULL);
}

