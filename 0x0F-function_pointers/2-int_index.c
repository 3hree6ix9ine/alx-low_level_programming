#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array containing elements
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if no element match, & is size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
