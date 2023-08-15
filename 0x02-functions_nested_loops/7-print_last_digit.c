#include "main.h"
/**
 * main - Entry point
 * Description: unction that prints the last digit of a number
 * Return: the last digit.
 */

int print_last_digit(int z)
{
	int ld;

	ld = z % 10;
	if (ld < 0)
	{
		_putchar(ld + 48);
		return(-ld);
	}
	else
	{
		-putchar(ld + 48);
		return(ld);
	}
}
