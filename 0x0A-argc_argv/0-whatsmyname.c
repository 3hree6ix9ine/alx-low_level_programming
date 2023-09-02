#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: the num of command line argument
 * @argv: the array that have command line argument
 * Return: eachtime (0)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);

}
