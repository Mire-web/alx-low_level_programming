#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */

int main(void)
{
int sum, n = 1, t = 2, nextTerm, count;
 for (count = 0; count <= 50; count++)
{
if (nextTerm < 4000000)
{
nextTerm = t + n;
n = t;
t = nextTerm;
sum += nextTerm;
}
}
printf("%d", sum);
return 0;
}
