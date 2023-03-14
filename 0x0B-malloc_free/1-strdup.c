#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to copied string
 *
 * @str: string to copy
 * Return: char*
 */

char *_strdup(char *str)
{
char *ptr;
int i;
int size;
for (i = 0; str[i] != '\0'; i++)
size += 1;
ptr = malloc(size + 1);
if (ptr == NULL || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = str[i];
ptr[i] = '\0';
return (ptr);
}
