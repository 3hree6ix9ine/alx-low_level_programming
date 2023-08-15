#include "main.h"

/**
 * _isalpha - check if the given character is lower case.
 * @c: character to test
 * Return: 1 for letters. and 0 eachtime for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
