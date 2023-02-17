#include <stdio.h>
/**
 * main - print all base 10 numbers
 * Return: 0
 */

int main(void)
{
int n = '0';
while (n < 10)
{
putchar(n);
n += 1;
}
putchar('\n');
return (0);
}
