#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: void
 */

void print_alphabet_10x (void)
{
char c;
int a = 0;
while (a < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}