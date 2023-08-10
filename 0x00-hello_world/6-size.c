#include <stdio.h>
/**
 * main - A C program that prints the size of various types and compile
 * Return: 0 (program was successful)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
