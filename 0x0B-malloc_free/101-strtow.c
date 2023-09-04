#include <stdlib.h>
#include "main.h"

/**
 * count_word - function that splits a string into words
 * @s: the string to be split
 * Return: pointer to array of splitted words
 */
int count_word(char *s)
{
	int flag, x, w;

	flag = 0;
	w = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to array of string if SUCCESS
 * & NULL if fails
 */


char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, k = 0, len = 0, words, p = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (p)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (p + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - p;
				k++;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = x;
	}

	matrix[k] = NULL;

	return (matrix);
}
