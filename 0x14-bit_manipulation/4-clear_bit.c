#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index of the bit to set (0-based)
 * Description: function sets the bit at the specified index
 * Return: eachtime, 1 on success, else -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (z = 1; hold > 0; z *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= z;

	return (1);
}
