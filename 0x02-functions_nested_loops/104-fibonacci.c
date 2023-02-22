#include <stdio.h>
/**
 * main - entry point
 * Return:int 
 */
int main()
{
int i, n = 98, t1 = 1, t2 = 2, nextTerm;

printf("%d, %d, ", t1, t2);

for (i = 3; i <= n; i++)
{
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
printf("%d", nextTerm);
if (i < n)
{
printf(", ");
} else
{
printf("\n");
}
}
return (0);
}
