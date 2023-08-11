#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * Return: eachtime (0)
 */

int main(void)
{
	int x, y, z;

	x = '0';
	y = '0';
	z = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			z = '0';
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
		y = '0';
	}
	putchar('\n');

	return (0);
}
