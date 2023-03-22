#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print Name
 *
 * @name: Name
 * @f: Pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
