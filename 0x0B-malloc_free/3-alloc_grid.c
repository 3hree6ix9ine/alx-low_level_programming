#include "main.h"
#include <stdlib.h>


/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional,
 * array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer allocated (SUCCESS), & NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *) malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			free(arr);
			for (y = 0; y <= x; y++)
				free(arr[y]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}

