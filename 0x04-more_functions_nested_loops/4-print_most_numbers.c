#include "main.h"

/**
*print_most_numbers - function that prints from 0 to 9
*
*Return: eachtime 0
*/

void print_most_numbers(void)
{
	int w;

	for (w = 48; w < 58; w++)
	{
	if ((w == 50) || (w == 52))
	{
	continue;
	}
	_putchar(w);
	}
_putchar('\n');
}
