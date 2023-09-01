#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: append
 * @src: string to add
 * Return:resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
