#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print the 9 times table
 * @n: params
 *Return:void
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return;
}
else
{
int y, j;
for (y = 0; y < (n + 1); y++)
{
for (j = 0; j < (n + 1); j++)
{
int result = j * y;
if (result > 99)
{
printf(", %d", result);
}
else if (result > 9)
{
printf(",  %d", result);
}
else
{
if (j != 0)
{
printf(",   ");
}
putchar(result + '0');
}
}
putchar('\n');
}
}
}
