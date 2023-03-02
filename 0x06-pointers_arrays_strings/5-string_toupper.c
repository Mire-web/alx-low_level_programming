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
while (a[count] <= 'A' && a[count] >= 'z')
{
a[count] = a[count] - 32;
count++;
}
return (tmp_a);
}
