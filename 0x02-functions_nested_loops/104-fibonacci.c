#include <stdio.h>

/**
*main - prints first 98
*fibonacci sequence
*Return: eachtime return 0
*/

int main(void)
{
	int zc;
		unsigned long w1 = 0, w2 = 1, w3;
		unsigned long w1_z1, w1_z2, w2_z1, w2_z2;
		unsigned long z1, z2;

	for (zc = 0; zc < 92; zc++)
	{
		w3 = w1 + w2;
		printf("%lu, ", w3);
		w1 = w2;
		w2 = w3;
	}
		w1_z1 = w1 / 10000000000;
		w2_z1 = w2 / 10000000000;
		w1_z2 = w1 % 10000000000;
		w2_z2 = w2 % 10000000000;
	for (zc = 93; zc < 99; zc++)
	{
	z1 = w1_z1 + w2_z1;
	z2 = w1_z2 + w2_z2;
	if ((w1_z2 + w2_z2) > 9999999999)
	{
	z1 += 1;
	z2 %= 10000000000;
	}
	printf("%lu%lu", z1, z2);
	if (zc != 98)
	printf(", ");

	w1_z1 = w2_z1;
	w1_z2 = w2_z2;
	w2_z1 = z1;
	w2_z2 = z2;
	}
	printf("\n");
	return (0);
}
