#include "main.h"

/**
 * print_rev - return string reversed
 * @s: pointer
 */

void print_rev(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
s--;
int j = i;
while (j > 0)
{
_putchar(*s);
j--;
s--;
}
_putchar('\n');
}
