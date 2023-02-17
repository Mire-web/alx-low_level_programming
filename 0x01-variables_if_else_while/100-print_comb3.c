#include <stdio.h>
#include <unistd.h>
/**
 * main - prints combination of double digits
 * Return: 0 success
 */
int main(void)
{
int n;
int d = 0;
while (d < 10)
{
n = 0;
while (n<10)
{
if (d != n && d < n)
{
putchar('0' + d);
putchar('0' + n);
if (n + d != 17)
{
putchar(',');
putchar(' ');
}
}
n++;
}
d++;
}
putchar('\n');
return (0);
}
