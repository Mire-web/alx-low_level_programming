#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 *
 * @min: starting integer
 * @max: maximum integer in array
 * Return: int*
 */

int *array_range(int min, int max)
{
int  *ptr;
int i = 0;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * ((max - min) + 1));
if (ptr == NULL)
return (NULL);
while (min <= max)
{
ptr[i] = min;
i++;
min++;
}
return (ptr);
}
