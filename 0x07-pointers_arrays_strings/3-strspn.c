#include "main.h"

/**
 * _strspn - return number of character matches
 *
 * @s: Pointer to string
 * @accept: pointer to characters to match
 * Return:char*
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int byteCount = 0;
for (i = 0; s[i] >= '\0'; i++)
{
int j;
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
byteCount++;
break;
}
else if (accept[j + 1] == '\0')
return (byteCount);
}
}
return (byteCount);
}
