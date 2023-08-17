#include <stdio.h>

/**
*main- prints the largest prime factor
*prime factor of the number 612852475143
*Return: eachtime 0
*/

#include <stdio.h>

int main(void)
{
	long number = 612852475143;
	long prime = 2;

	while (number > 1)
	{
	if (number % prime == 0)
	{
	number /= prime;
	}
	else
	{
	prime++;
	}
	}

	printf("%ld\n", prime);
	return (0);
}

