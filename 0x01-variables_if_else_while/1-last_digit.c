#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
		printf("Last digit of %d and is %d and is greater than 5\n", n, z);
	if (z == 0)
		printf("Last digit of %d and is %d and is 0 \n", n, z);
	if (z < 6 && z != 0)
		printf("Last digit of %d and is %d and is less than 6\n", n, z);
	return (0);
}
