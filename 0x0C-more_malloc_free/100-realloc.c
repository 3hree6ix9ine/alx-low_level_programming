#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: size of memory for ptr
 * @new_size: size of the new memory to be allocated
 * Return: eachtime pointer to newly allocated memory block
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int w;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (w = 0; w < new_size; w++)
			ptr1[w] = old_ptr[w];
	}

	if (new_size > old_size)
	{
		for (w = 0; w < old_size; w++)
			ptr1[w] = old_ptr[w];
	}

	free(ptr);
	return (ptr1);
}
