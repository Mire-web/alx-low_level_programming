#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked : allocate memory using malloc
 *
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
