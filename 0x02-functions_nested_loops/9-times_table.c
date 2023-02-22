#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: void ;
 */

void times_table(void)
{
int n, j;
for (n = 0; n < 10; n++)
{
for (j = 0; j < 10; j++)
{
int result = j * n;
if (result > 9)
{
_putchar(',');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(result + '0');
}
}
_putchar('\n');
}
}
