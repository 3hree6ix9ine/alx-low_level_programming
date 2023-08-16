#include <stdio.h>

/**
*main - prints first 50
*fibonacci
*Return: eachtime return 0
*/
int main(void)
{
int inc;
unsigned long z1 = 0, z2 = 1, z3;
for (inc = 0; inc < 50; inc++)
{
z3 = z1 + z2;
printf("%lu", z3);
z1 = z2;
z2 = z3;

if (inc == 49)
printf("\n");
else
printf(", ");

}

return (0);
}
