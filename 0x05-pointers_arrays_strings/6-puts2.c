#include "main.h"

/**
 * puts2 - prints everyother character
 * @s: pointer
 */

void puts2(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s += 2;
}
_putchar('\n');
}
