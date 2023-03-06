#include "main.h"

/**
 * _memset - Fill memory with constant bytes
 *
 * @s: Pointer to memory
 * @b: byte to fill with
 * @n: number of byte to fill
 * Return:char*
 */

char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
