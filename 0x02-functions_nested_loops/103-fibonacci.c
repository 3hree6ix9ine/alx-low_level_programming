#include <stdio.h>

/**
* main - prints sum of even fibonacci
* the sequence
* fibonacci numbers
* Return: eachtime  return 0
*/

int main(void)
{
	unsigned long w1 = 0, w2 = 1, w3 = 0, sum = 0;

	while (w3 <= 4000000)
	{
	w3 = w1 + w2;
	w1 = w2;
	w2 = w3;

	if ((w1 % 2) == 0)
	sum += w1;
	}

	printf("%ld\n", sum);
	return (0);
}
