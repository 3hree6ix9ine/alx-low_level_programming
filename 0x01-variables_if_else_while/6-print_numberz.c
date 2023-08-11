#include <stdio.h>
/**
 * main - A c program that prints all single digit numbers of base 10
 * Return: eachtime 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
