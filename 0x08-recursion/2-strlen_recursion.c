#include "main.h"

/**
 * _strlen_recursion - return length of a string
 *
 * @s: pointer to string.
 * Return: int;
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i += 1;
return (i + _strlen_recursion(s + 1));
}
return (i);
}
