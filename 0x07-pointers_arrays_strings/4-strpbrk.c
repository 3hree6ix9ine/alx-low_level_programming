#include "main.h"
#include <stdio.h>

/**
*_strpbrk - function searches a string for any of a set
*@s: string where search is made
*@accept: string containing bytes to look for.
*
*Return: Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int w;
	int x;

	for (w = 0; *s != '\0'; w++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
