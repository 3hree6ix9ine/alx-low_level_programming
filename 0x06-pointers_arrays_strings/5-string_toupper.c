#include "main.h"

/**
 * string_toupper - lowercase letters of string to uppercase
 * @s: string
 * Return: resulting string
 */

char *string_toupper(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] >= 'a' && s[y] <= 'z')
			s[y] = s[y] - 32;
	}

	return (s);
}
