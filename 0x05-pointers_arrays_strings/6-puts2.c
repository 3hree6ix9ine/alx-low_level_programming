#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: eachtime 0
 **/
void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
			_putchar(str[m]);
		m++;
	}

	_putchar('\n');
}
