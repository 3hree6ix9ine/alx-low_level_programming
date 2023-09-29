#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number
 * @index: index starting from 0
 * Return: eachtime, value of bit at index, else -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	do  {
		bit = (n >> index) & 1;
	} while (0);

	return (bit);
}

