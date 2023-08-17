#include "main.h"

/**
*print_line - function that draws a straight line
*@n: parameter
*Return: eachtime 0
*/

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{

	int w;

	for (w = 1; w <= n; w++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
