#include <stdio.h>
/**
 * main - A C  program that prints the alphabet in lowercase, and uppercase
 * Return: eachtime 0
 */

int main(void)
{
	int n = 97;
	int m = 64;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
