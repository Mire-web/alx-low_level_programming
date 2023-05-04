#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: integer to represent
 */

void print_binary(unsigned long int n)
{
/* Initialize variables*/
unsigned long int b_int, truncate = 0;
int i = 63;
/*size of unsigned long int*/
if (!n)
{
_putchar('0');
return;
}
while (i >= 0)
{
b_int = (n >> i & 1);
if (truncate || b_int)
{
_putchar(b_int ? '1' : '0');
truncate = 1;
}
i--;
}
if (truncate == 0)
{
_putchar('0');
}
}
