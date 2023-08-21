#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int m, n, len;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	len = m;

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
