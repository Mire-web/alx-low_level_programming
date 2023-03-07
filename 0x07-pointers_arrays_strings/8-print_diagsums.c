#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of diagonals
 * @a:pointer to array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
int i, j;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}
for (j = size - 1; j >= 0; j--)
{
sum2 += a[j * size + (size - 1 - j)];
}
printf("%d, %d\n", sum1, sum2);
}
