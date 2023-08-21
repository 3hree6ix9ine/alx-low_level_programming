#include "main.h"

/**
 * char *_strcpy -function that copies string pointed to by src
 * @dest: destination
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int x = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for ( ; x < w ; x++)
	{
		dest[x] = src[x];
	}
	dest[w] = '\0';
	return (dest);
}

