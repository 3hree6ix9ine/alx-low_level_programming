#include "main.h"

/**
* print_times_table - prints the times table
* parameter
* @z: parameter
* Return: returns zero
*/
void print_times_table(int z)
{
	int digit, mult, result;

	if (z <= 15 && z >= 0)
	{
		for (digit = 0; digit <= z; digit++)
		{
			_putchar('0');

			for (mult = 1; mult <= z; mult++)
			{
				_putchar(',');
				_putchar(' ');
				result = digit * mult;

				if (result <= 99)
					_putchar(' ');

				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
