#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 10 times
 * Return: void
 */

void more_numbers(void)
{
long i, o = 0;
while (o <= 10)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10)+ '0');
}
_putchar('\n');
o++;
}
}
