#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function given as parameter on each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: function pointer to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
