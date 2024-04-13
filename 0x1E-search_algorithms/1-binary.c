#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n, middle;
	size_t min = 0;
	size_t max = size - 1;
	int index = -1;

	if (!array)
		return (index);

	while (min <= max)
	{
		middle = (min + max) / 2;
		printf("Searching in array: ");
		for (n = min; n <= max; n++)
		{
			printf("%i%s", array[n], n == max ? "\n" : ", ");
		}
		if (array[middle] < value)
			min = middle + 1;
		else if (array[middle] > value)
			max = middle - 1;
		else
			return ((int)middle);
	}
	return (index);
}
