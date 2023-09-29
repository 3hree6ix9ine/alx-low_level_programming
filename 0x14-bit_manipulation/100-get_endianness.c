#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: eachtime, 1 if little endian, else 0
 */


int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
