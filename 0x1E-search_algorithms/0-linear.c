#include "search_algos.h"

/**
 * linear_search - searches for a value in an integer array using a linear
 * search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n = -1;

	if (!array)
		return (n);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%i]", n, *array);
		if (*array == value)
			return (n);
		array++;
	}
	return (n);
}
