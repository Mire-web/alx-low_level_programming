#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: parameter for checks
 * Return: 0 ;
 */

int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
_putchar(last_digit + '0');
return (0);
}
