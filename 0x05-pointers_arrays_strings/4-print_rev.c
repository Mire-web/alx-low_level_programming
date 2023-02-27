#include "main.h"

/**
 * print_rev - return string reversed
 * @s: pointer
 */

void print_rev(char *s)
{
int i = 0;
int j;
while (*s != '\0')
{
i++;
s++;
}
s--;
j = i;
while (j > 0)
{
_putchar(*s);
j--;
s--;
}
_putchar('\n');
}
