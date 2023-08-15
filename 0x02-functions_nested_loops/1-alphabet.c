#include "main.h"
/**
 * main - Entry points.
 * Description: alphabet in lowercase
 * Return: eachtime  0
 */

void print_alphabet(void)
{
	int n;

	for (n=97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
