#include <stdio.h>
#include "function_pointers.h"

// Always handle NULL result

/**
 * array_iterator - execute function on each element of an array
 *
 * @array: pointer to array
 * @size: Size of array
 * @action: function to execute on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || size == 0)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
