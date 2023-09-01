#include "main.h"

/**
 * _strcmp - fucntion that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns zero if s1 == s2,
 *returns negative number if s1 < s2,
 *returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
