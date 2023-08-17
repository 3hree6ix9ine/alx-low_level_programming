#include <stdio.h>

/**
*main -  prints numbers from 1 to 100
*fizz buzz or fizzBuzz
*
*Return: eachtime 0
*/

int main(void)
{
	int n;

	while (n++ < 100)

	if ((n % 3 == 0) && (n % 5 == 0))
	printf("FizzBuzz ");

	else if ((n % 3) == 0)
	printf("Fizz ");

	else if ((n % 5) == 0)
	{
	if (n != 100)
	printf("Buzz ");

	else
	printf("Buzz");
	}

	else
	printf("%d ", n);

	printf("\n");
	return (0);
}
