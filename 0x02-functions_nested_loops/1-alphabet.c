#include "main.h"
/**
 * print_alphabet - write lower-case alphabet on a line
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
