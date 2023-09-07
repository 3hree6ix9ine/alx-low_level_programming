#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: the size of the memory block to allocate
 *Return: eachtime void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int w;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (w = 0; w < (nmemb * size); w++)
			block[w] = 0;
		return (block);
	}
	else
		return (NULL);
}
