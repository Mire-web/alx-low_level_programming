#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: pointer to array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int tmp = 0;
int counter;
int negative_counter = n - 1;
for (counter = 0; counter < n / 2; counter++)
{
tmp = a[negative_counter];
a[negative_counter] = a[counter];
a[counter] = tmp;
negative_counter--;
};
}
