#include <stdio.h>

/**
* main - program that prints all arguments it receives
*@argc: the number of command line arguments
*@argv: the array that have the command line arguments
*Return: eachtime (0)
*/

int main(int argc, char *argv[])
{
		int x;

		for (x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}

		return (0);
}

