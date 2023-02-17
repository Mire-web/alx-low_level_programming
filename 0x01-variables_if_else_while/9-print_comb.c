#include <stdio.h>
/**
 * main - print all base 10 numbers
 * Return: 0
 */

int main(void)
{
int n = 0;
while (n < 10)
{
putchar((n % 10) + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
n += 1;
}
putchar('\n');
return (0);
}
