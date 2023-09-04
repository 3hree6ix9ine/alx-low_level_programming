#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: count of argumnets passed to the function. ie argument counts
 * @av: the pointer to array of size.
 * Return: pointer to new string, NULL if ac == 0 or av == null,
 *  & NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int m = 0, w = 0, cont = 0;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (m < ac)
	{
		new = av[m];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		m++;
	}
	result = malloc(cont + 1);
	m = 0;
	while (m < ac)
	{
		new = av[m];
		while (*new)
		{
			result[w] = *new;
			new++;
			w++;
		}
		result[w] = '\n';
		w++;
		m++;
	}
	result[cont] = '\0';
	return (result);
}

