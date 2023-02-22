#include <stdio.h>

/**
 * main - entry point
 * Return: int 
 */

int main() {
int sum, n = 1, t = 2, nextTerm, count;
for (count = 0; count <= 4000000; count++)
{
nextTerm = t + n;
n = t;
t = nextTerm;
sum += nextTerm;
}
printf("%d", sum);
return 0;
}
