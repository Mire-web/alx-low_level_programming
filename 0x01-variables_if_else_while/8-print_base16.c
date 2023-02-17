#include <stdio.h>
/**
 * main - print all base 10 numbers
 * Return: 0
 */

int main(void)
{
int n = 0;
char c = 'a';
while (n < 10)
{
putchar((n % 10) + '0');
n += 1;
}
while (c <= 'f')
{
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
