#include "main.h"

/**
 * jack_bauer - print jacks life time
 * Return: void ;
 */

void jack_bauer(void)
{
int n = 0, j, k, l;
while (n < 3)
{
j = 0;
if (n == 2)
{
j = 0;
while (j < 4)
{
k = 0;
while (k < 6)
{
l = 0;
while (l < 10)
{
_putchar(n + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
l++;
}
k++;
}
j++;
}
n++;
}
else
{
while (j < 10)
{
k = 0;
while (k < 6)
{
l = 0;
while (l < 10)
{
_putchar(n + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
l++;
}
k++;
}
j++;
}
n++;
}
}
}
