#include "main.h"

/**
 *_strlen - function that returns the length of a string
 * @s: string
 *Return: eachtime return lenght;
 */

int _strlen(char *s)
{
	int longm = 0;

	while (*s != '\0')
	{
		longm++;
		s++;
	}

	return (longm);
}
