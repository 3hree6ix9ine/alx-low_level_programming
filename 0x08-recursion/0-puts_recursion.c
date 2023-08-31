#include "main.h"

/**
 * _puts_recursion - prints a string and followed by a new line
 * @s: string to print
 *Return: eachtime 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
