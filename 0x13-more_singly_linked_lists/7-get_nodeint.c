#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *of a listint_t linked list.
 * @head: the first node in the list
 * @index: index of the node to return
 * Return: eachtime, to the node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	do

	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	} while (temp);

	return (NULL);
}

