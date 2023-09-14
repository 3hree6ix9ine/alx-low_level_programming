#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
