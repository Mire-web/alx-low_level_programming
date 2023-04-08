#include "main.h"


/**
 * get_bit - Get the bit object
 *
 * @n: integer to check for bits
 * @index: index to check for bits
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (n & mask)
{
return (1);
}
else if (!(n & mask))
{
return (0);
}

return (-1);
}
