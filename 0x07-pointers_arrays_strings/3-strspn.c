#include "main.h"

/**
 * _strspn - function that gets length of a prefix substring
 * @s: string to execute
 * @accept: string value - char
 *
 * Return: number of bytes in first segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int w = 0, x = 0;
	unsigned int a = 0;

	while (s[x] != ' ' && s[x] != '\0')
	{
		while (accept[w] != '\0')
		{
			if (s[x] == accept[w])
				a++;
			w++;
		}
		x++;
		w = 0;
	}
	return (a);
}
