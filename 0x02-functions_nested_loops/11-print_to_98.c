#include "main.h"

/**
 * print_to_98 - print all natural numbers from int to 98
 * Return: void ;
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n > 9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
if (n > 99)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
else if (n > 9 && n <= 99)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
n--;
}
}
}
