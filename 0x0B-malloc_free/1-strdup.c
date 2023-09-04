#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: String to be copied
 *Return: pointer to be allocated, & NULL if fail
 */

char *_strdup(char *str)
{
	char *cpy;
	int x;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)

	{
		cpy[x] = str[x];
	}

	cpy[len] = '\0';

	return (cpy);
}

