#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers.
* @argc: the number of command line arguments
* @argv: the array of command line  arguments
* Return: eachtime (0), if fail else (1)
*/

int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}

