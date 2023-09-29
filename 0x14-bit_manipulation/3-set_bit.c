#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the unsigned long integer in which to set the bit.
 * @index: index of the bit to set (0-based).
 * Description: function sets the bit at the specified index.
 * Return: eachtime 1 on success, else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}

