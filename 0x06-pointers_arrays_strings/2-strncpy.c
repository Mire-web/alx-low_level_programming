#include "main.h"

/**
 * _strncpy - copy  a str to another
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of characters to concate
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
char *tmp_dest = dest;
int counter = 0;
while (counter < n && src[counter] != '\0')
{
tmp_dest[counter] = src[counter];
counter++;
}
if (src[counter] == '\0')
tmp_dest[counter] = src[counter];
return (tmp_dest);
}
