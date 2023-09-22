#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_list - function that frees a list_t list.
 * @head: Head of the list
 */


void free_list(list_t *head)
{
	while (head)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}

