#include "main.h"

/**
 * puts2 - prints everyother character
 * @s: pointer
 */

void puts2(char *s)
{
int i;
while (*s != '\0')
{
putchar(*s);
s += 2;
}
}
