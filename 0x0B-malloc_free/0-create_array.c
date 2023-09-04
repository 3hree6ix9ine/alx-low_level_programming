#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size & assign char
 * @size: size of array
 * @c: size of one unit
 * Return: pointer to array & NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int x;

	if (size == 0)
		return (NULL);

	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		res[x] = c;
	}
	return (res);
}
