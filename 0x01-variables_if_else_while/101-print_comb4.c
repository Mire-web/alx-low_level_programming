#include <stdio.h>
#include <unistd.h>
/**
 * main - prints combination of double digits
 * Return: 0 success
 */
int main(void)
{
int n;
int c;
int d = 0;
while (d < 10)
{
n = 0;
while (n < 10)
{
c = 0;
while (c < 10)
{
if (n != c && n < c)
{
if (d != n && d < n)
{
putchar('0' + d);
putchar('0' + n);
putchar('0' + c);
if (n + d != 19)
{
putchar(',');
putchar(' ');
}
}
}
c++;
}
n++;
}
d++;
}
putchar('\n');
return (0);
}
