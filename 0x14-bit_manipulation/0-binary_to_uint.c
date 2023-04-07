#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int
 *
 * @b: pointer to number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int len = 0, sum = 0, i;

if (b == NULL)
{
return (0);
}

for (i = 0; b[i]; i++)
{
if (b[i] > '1' || b[i] < '0')
return (0);
else
len += 1;
}
i = 0;
while (i <= len)
{
if (b[i] == '1')
{
sum |= 1 << ((len - 1) - i);
}
i++;
}
return (sum);
}
