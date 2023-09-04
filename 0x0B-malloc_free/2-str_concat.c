#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: the other string to concatenate
 * Return: pointer to allocated (Success), & NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int x = 0, y = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	k = x + y + 1;
	res = malloc(k * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (cont = 0; cont < x; cont++)
	{
		res[cont] = s1[cont];
	}
	for (cont = 0; cont <= y; cont++)
	{
		res[cont + x] = s2[cont];
	}
	return (res);
}

