#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number of elements
 * @size: size of array
 * Return: void*
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = (int *)malloc(sizeof(int) * size);
if (!ptr)
return (NULL);
return (ptr);
}
