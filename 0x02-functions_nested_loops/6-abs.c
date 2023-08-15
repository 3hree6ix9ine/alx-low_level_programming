#include "main.h"

/**
 * main - Entry point
 * Description: function that computes the absolute value of an integer
 * Return: absolute value
 */

int _abs(int n)
{

	if (n >=0)
	{
		return(n);
	}
	else
	{
		return(n * -1);
	}
}
