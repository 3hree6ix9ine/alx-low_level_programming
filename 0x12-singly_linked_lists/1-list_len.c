#include "lists.h"
#include <stdio.h>


/**
 * list_len - Function that returns number of elements in a linked list_t list.
 * @h: Head of the list
 * Return: Number of nodes
 */


size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

