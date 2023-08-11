#include <stdio.h>
/**
 * main - A c program that prints all the numbers of base 16 in lowercase
 * Return: eachtime 0
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);

}
