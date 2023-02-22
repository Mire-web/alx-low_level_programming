#include "main.h"
#include <stdio.h>
/**
 * fib_seq - write out first 50 fib starting with 1 and 2
 * Return: void
 */
void fib_seq(void)
{
int n = 1, d = 2, c, tmp,count;
printf("%d, ", 1);
printf("%d, ", 2);
for (count = 0; count <= 50; count++)
{
if (count < 50)
{
c = d + n;
printf("%d, ", c);
tmp = d;
d = c;
n = tmp;
}
else if (count == 50)
{
c = d + n;
printf("%d", c);
d = c;
n = d;
}
}
}

/**
 * main - entry point
 *Return:int
 */

int main(void)
{
fib_seq();
return (0);
}
