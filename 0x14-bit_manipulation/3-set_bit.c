#include "main.h"

/**
 * set_bit - Set the bit object
 *
 * @n: integer to set for bits in
 * @index: index to check for bits
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index > 63)
return (-1);
if (*n & mask)
{
return (1);
}
else
{
*n |= mask;
return (1);
}
}
