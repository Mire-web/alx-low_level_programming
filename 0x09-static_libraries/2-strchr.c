#include <stddef.h>
#include "main.h"

/**
 * _strchr - find character
 *
 * @s: Pointer to string
 * @c: character to find
 * Return:char*
 */

char *_strchr(char *s, char c)
{
int i;
char *p;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
p = &s[i];
return (p);
}
}
return (NULL);
}
