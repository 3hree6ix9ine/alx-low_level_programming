#include <stdio.h>
/**
 * main - print two digits separated
 * Return: eachtime (0)
 */
int main(void)
{
	int x, z;

	x = '0';
	z = '0';

	while (x <= '9')
	{
		while (z <= '9')
		{
			if (x < z)
			{
				putchar(x);
				putchar(z);
				if (x != '8' || (x == '8' && z != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			z++;
		}
		x++;
		z = '0';
	}
	putchar('\n');
	return (0);
}
