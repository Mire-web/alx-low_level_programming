#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create a array object
 *
 * @size: size of array
 * @c: character to initialize with
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
