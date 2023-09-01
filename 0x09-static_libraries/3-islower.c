#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: checks for lowercase
 * Return: 1 for lowercase. and 0 eachtime for the rest
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
