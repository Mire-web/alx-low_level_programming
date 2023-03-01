#include "main.h"

/**
 * _strncat - concatenate  a str to another
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of characters to concate
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
int counter;
int DESTINATION_LENGTH = 0;
char *tmp_dest = dest;
while (*dest != '\0')
{
DESTINATION_LENGTH++;
dest++;
}
counter = 0;
while (counter < n  && src[counter] != '\0')
{
tmp_dest[DESTINATION_LENGTH] = src[counter];
counter++;
DESTINATION_LENGTH++;
}
if (src[counter] == '\0')
tmp_dest[DESTINATION_LENGTH] = *src;
return (tmp_dest);
}
