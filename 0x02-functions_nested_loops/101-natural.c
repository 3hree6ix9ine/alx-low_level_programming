#include <stdio.h>

/**
* main - prints count of multiples
* 3 or 5 below 1024
* Return:eachtime return 0
*/

int main(void)
{
	int z, sum = 0;

	for (z = 0; z < 1024; z++)
	{
	if ((z % 3) == 0 || (z % 5) == 0)
	sum += z;
	}

	printf("%d\n", sum);
	return (0);
}

