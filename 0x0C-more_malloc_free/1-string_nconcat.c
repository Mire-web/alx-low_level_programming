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
int i, j;
unsigned int k;
char *ptr;
if (!s1) s1 = "";
if (!s2) s2 = "";
for (i = 0; s1[i] != '\0'; i++)
j++;
j += n;
ptr = malloc(sizeof(char) * j);
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; s1[i]; i++)
ptr[i] = s1[i];

for (k = 0; k < n && s2[k]; k++)
{
ptr[i] = s2[k];
i++;
}
return (ptr);
}
