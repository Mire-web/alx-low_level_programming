#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */

int main(void)
{
int sum = 613732, n = 1, t = 2, nextTerm, count;
for (count = 0; count <= 50; count++)
{
if (nextTerm < 4000000)
{
nextTerm = t + n;
n = t;
t = nextTerm;
}
}
sum += 4000000;
printf("%d\n", sum);
return (0);
}
