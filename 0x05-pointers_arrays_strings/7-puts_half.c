#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if odd len, n = length
 * @str: input
 * Return: half of it
 */
void puts_half(char *str)
{
	int x, y, longm;

	longm = 0;

	for (x = 0; str[x] != '\0'; x++)
		longm++;

	y = (longm / 2);

	if ((longm % 2) == 1)
		y = ((longm + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

