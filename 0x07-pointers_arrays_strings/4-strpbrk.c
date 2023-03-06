#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - return character matches
 *
 * @s: Pointer to string
 * @accept: pointer to characters to match
 * Return:char*
 */

char *_strpbrk(char *s, char *accept)
{
int i;
char *p;
for (i = 0; s[i] >= '\0'; i++)
{
int j;
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
}
}
return (NULL);
}
