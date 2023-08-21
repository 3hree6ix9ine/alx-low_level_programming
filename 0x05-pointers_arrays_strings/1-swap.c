#include "main.h"

/**
 *swap_int - function that swaps the values of two integers.
 *@a: first swap
 *@b: second swap
 *Return: eachtime 0
 */

void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
