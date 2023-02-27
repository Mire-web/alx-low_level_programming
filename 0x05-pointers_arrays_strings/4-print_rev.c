#include "main.h"

/**
 * print_rev - return string reversed
 * @s: pointer
 */

void print_rev(char *s)
{
int i = 0;
int j;
while (*(s + i) != '\0')
{
i++;
}
j = i;
while (j >= 1)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
