#include <stdio.h>

/**
*main - prints first 98
*fibonacci sequence
*Return: eachtime return 0
*/

int main(void)
{
	unsigned long int a = 1, b = 2, next_term;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
	next_term = a + b;
	printf(", %lu", next_term);
	a = b;
	b = next_term;
	}

	printf("\n");
	return (0);
}
