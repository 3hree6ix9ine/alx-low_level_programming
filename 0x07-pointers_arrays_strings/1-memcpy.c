#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: destination memory area
 *@src: area where bytes are copied from
 *@n: number of bytes to copy
 *Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w = 0;

	for (; w < n; w++)
		dest[w] = src[w];

	return (dest);
}
