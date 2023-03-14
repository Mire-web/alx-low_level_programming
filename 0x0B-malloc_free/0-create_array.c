#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Create a array object
 *
 * @size: size of array
 * @c: character to initialize with
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
unsigned int i;
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
