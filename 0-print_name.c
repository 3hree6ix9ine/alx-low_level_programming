#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - function that print a name
 * @name: name of the person to print
 * @f: pointer to the printing function
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
