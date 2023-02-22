#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from int to 98
 * Return: int ;
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
n++;
}
}
else
{
while (n >= 98)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
printf("%d, ", n);
n--;
}
}
}
