#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: number to calculate square root
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of numb
 * @n: number to calc sqaure root
 * @x: variable to count
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
