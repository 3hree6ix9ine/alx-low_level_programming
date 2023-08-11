#include <stdio.h>

/**
 * main - Entry point
 * Return: Eachtime 0 (Success)
 */

int main(void)
{
	int a, b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a++;
		b = '0';
	}
	putchar('\n');
	return (0);
}
