#include "main.h"

/**
*print_square - prints a square
*@size: square
*Return: eachtime 0
*/

void print_square(int size)
{

	int m, n;

	n = 0;

	if (size < 1)
	_putchar('\n');

	while (n < size)
	{
	m = 0;
	while (m < size)
	{
	_putchar('#');
	m++;
	}
	_putchar('\n');
	n++;
	}
}
