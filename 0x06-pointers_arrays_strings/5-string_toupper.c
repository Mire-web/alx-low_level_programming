#include "main.h"

/**
 * string_toupper - change string to uppercase
 * @a: pointer to string
 * Return: Char *
 */

char *string_toupper(char *a)
{
char *tmp_a = a;
int count = 0;
while (*a < 123 && *a > 64)
{
tmp_a[count] = *a - 32;
count++;
a++;
}
return (tmp_a);
}
