#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of
 *two diagonals of square matrix of integers
 *@a: square matrix of print the sum of diagonal
 *@size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int p;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (p = 0; p < size; p++)
	{
	sum += a[(size * p) + p];
	sum1 += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
