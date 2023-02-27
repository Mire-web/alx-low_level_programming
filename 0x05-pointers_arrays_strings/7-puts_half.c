#include "main.h"

/**
 * puts_half - prints second-half of the string
 * @s: pointer
 */

void puts_half(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
i++;
if (i % 2 == 0)
{
for (j = (i / 2); j < i; j++)
_putchar(s[j]);
s++;
}
else
{
for (j = ((i + 1) / 2); j < i; j++)
_putchar(s[j]);
s++;
}
_putchar('\n');
}
