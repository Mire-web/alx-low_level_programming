#include "main.h"

/**
 * print_squares - draw square in terminal
 * @size: integer parameter
 * Return: void
 */

void print_square(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
}
