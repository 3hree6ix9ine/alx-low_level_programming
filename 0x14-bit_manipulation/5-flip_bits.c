#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @x: The first number.
 * @y: The second number to convert to
 * Return: The number of bits that need to be flipped.
 */


unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned long int diff = x ^ y;
	unsigned int counter = 0;

	do  {
		counter += diff & 1;
		diff >>= 1;
	} while (diff);

	return (counter);
}

