#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies str to dest
 * @dest: pointer
 * @src: source of copy
 */

char *_strcpy(char *dest, char *src)
{
char* main_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
