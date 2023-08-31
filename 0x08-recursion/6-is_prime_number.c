#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that  returns 1 if the input integer is a prime
 * @n: number to evaluate
 * Return: return value
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}


/**
 * actual_prime - function that returns 1 if the input integer is a prime
 * @n: number to evaluate
 * @x: second number to evaluate
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
