#include <stdio.h>
#include "main.h"

/**
 * print_name - Print Name
 *
 * @name: Name
 * @f: Pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
