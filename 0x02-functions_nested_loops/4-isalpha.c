#include "main.h"

/**
 * main - Entry point
 * Description: checks for alphabetic character
 * Return: 1 for letters. and 0 eachtime for the rest.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <=122) || (c >= 65 && c <= 90))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
