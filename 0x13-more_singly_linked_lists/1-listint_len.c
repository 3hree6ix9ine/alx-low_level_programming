#include "lists.h"
#include <stdio.h>


/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: number of elements
 * Return: eachtime, the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		count++;
	}

	return (count);
}



