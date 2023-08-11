#include <stdio.h>
/**
 * main - A c program that prints the alphabet in lowercase except q and a
 * Return: each time 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
