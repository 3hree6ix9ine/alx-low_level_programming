#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: two dimension array to print
 *Return: eachtime 0
 */
void print_chessboard(char (*a)[8])
{
	int w;
	int x;

	for (w = 0; w < 8; w++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[w][x]);
		}
		_putchar('\n');
	}
}
