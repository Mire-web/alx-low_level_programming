#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t min, max, i, block_size;
	int index = -1;

	if (!array)
		return (-1);

	min = 0;
	block_size = sqrt(size);
	max = 0;

	while (max < size && array[max] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", max, array[max]);
		min = max;
		max += block_size;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", min, max);
	for (i = min; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			index = (int)i;
			return (index);
		}
	}
	return (index);
}
