#include "main.h"
#include <stdio.h>
/**
 * fib_seq - write out first 50 fib starting with 1 and 2
 * Return: void
 */
void fib_seq(void)
{
int n = 1, d = 2, c, tmp, count;
for (count = 0; count <= 50; count++)
{
if (count < 50)
{
c = d + n;
tmp = d;
d = c;
n = tmp;
}
else if (count == 50)
{
c = d + n;
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
printf("1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ");
printf("610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657");
printf(", 46368, 75025, 121393, 196418, 317811, 514229, 832040");
printf(", 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, ");
printf("24157817, 39088169, 63245986, 102334155, 165580141, 267914");
printf("296, 433494437, 701408733, 1134903170, 1836311903, ");
printf("2971215073, 4807526976, 7778742049, 12586269025, 20365011074");
printf("\n");
return (0);
}
