#include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *@a: array
 *@n: elements
 *Return: eachtime 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
