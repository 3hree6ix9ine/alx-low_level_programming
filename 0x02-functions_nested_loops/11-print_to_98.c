#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count numbers from n to 98
 * @n: count from
 */
void print_to_98(int n)
{
	int z;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (z = n ; z <= 98 ; z++)
		{
			printf("%d", z);
			if (z < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (z = n ; z >= 98 ; z--)
		{
			printf("%d", z);
			if (z > 98)
				printf(", ");

		}
	}
	printf("\n");
}

