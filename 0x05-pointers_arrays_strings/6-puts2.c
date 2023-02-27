#include "main.h"

/**
 * puts2 - prints everyother character
 * @s: pointer
 */

void puts2(char *s)
{
int i = 0;
while (*s != '\0')
{
if (i % 2 == 0)
_putchar(*s);
i++;
s++;
}
_putchar('\n');
}
