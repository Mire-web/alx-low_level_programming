#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
unsigned int n1;

main_n = n;

if (n < 0)
{
_putchar('-');
main_n = -n;
}

if (main_n / 10 != 0)
{
print_number(main_n / 10);
}
_putchar((n1 % 10) + '0');
}
