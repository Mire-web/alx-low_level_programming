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
char *ptrr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
ptrr = (char *)ptr;
for (i = 0; i < size; i++)
ptrr[i] = 0;
return (ptr);
}
