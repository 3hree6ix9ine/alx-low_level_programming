#include "main.h"

/**
 * reverse_array - fucntion that reverses an array of integers
 * @a: array in reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
