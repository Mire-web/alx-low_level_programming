#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concate two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: number of string two to concat
 * Return: char*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char  *ptr;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
for (i = 0; s1[i]; i++)
len1++;
for (i = 0; s2[i]; i++)
len2++;
if (n >= len2)
n = len2;
ptr = malloc(sizeof(char) * (len1 + n + 1));
if (!ptr)
{
return (NULL);
}
for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < n && i < (len1 + n); j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}
