#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: the number of command arguments
 * @argv: the array that have the  command arguments
 * Return: eachtime (0)
 **/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
