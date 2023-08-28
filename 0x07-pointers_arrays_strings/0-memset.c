#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: target area
 * @b: byte
 * @n: number of byte
 *
 * Return: new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		s[w] = b;
	}

	return (s);
}
