#include "main.h"

/**
 * print_sign - check if alphabet is in lowwercase
 * @n: parameter for checks
 * Return: 1 if c is lower 0 otherwise;
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
