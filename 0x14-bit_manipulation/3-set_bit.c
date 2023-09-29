#include "main.h"

/**
 * get_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: index starting from 0
 * Return: eachtime, 1 if it worked, else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > 64)
		return (-1);

	for (z = 1; index > 0; index--, z *= 2)
		;
	*n += z;

	return (1);
}
