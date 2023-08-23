#include "main.h"

/**
 * _strncpy - fucntion that copies a string
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
