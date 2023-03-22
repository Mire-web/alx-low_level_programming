#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 *
 * @array: pointer to array of elements
 * @size: no of elements in an array
 * @cmp: pointer to the compare value function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (0);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
