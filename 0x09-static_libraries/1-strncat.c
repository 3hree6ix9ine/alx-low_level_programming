#include "main.h"

/**
 * _strncat - function that concatenates a string to another
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);

}
