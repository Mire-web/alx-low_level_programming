#include "main.h"

/**
 * _memcpy - copy memory data
 *
 * @dest: Pointer to memory destination
 * @src: Pointer to source memory
 * @n: number of bytes to copy
 * Return:char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
