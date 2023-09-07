#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values & element
 * Return: eachtime pointer
 */


int *array_range(int min, int max)
{
	int *block;
	int x;
	int y = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (x = min; x <= max; x++)
		{
			block[y] = x;
			y++;
		}
		return (block);
	}
	else
		return (NULL);

}
