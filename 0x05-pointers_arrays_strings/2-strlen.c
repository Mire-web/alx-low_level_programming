#include "main.h"

/**
 * _strlen - return length of a string
 * @s: pointer
 */

int _strlen(char *s)
{
int i = 1;
while (*(s+i) != '\0')
{
i++;
}
return (i);
}
