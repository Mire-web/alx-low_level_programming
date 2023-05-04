#include "main.h"

/**
 * clear_bit - Clear the bit object
 *
 * @n: integer to clear bit from
 * @index: index to clear bit at
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index > 63)
return (-1);
*n &= ~mask;
return (1);
}
