#include "main.h"

/**
 * flip_bits - Clear the bit object
 *
 * @n: integer to flip bit
 * @m: integer to arrive at
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int sum = 0, mask = 1;
int i;
for (i = 63; i >= 0; i--)
{
if ((n ^ m) & mask << i)
{
sum++;
}
}
return (sum >> 1);
}
