#include "main.h"

/**
 * cap_string - captilize every word in string
 * @a: pointer to string
 * Return: Char *
 */

char *cap_string(char *a)
{
int count = 1;
if (a[0] >= 'a' && a[0] <= 'z')
a[0] = a[0] - 32;
while (a[count] != '\0')
{
if (a[count] < 'A' || a[count] > 'z')
{
count++;
continue;
}
else if (a[count] >= 'a' && a[count] <= 'z')
{
if (a[count - 1] == ' ' ||
a[count - 1] == '\t' ||
a[count - 1] == '\n' ||
a[count - 1] == ',' ||
a[count - 1] == '.' || a[count - 1] == '!' ||
a[count - 1] == ';' || a[count - 1] == '?' ||
a[count - 1] == '"' ||
a[count - 1] == '(' || a[count - 1] == ')' ||
a[count - 1] == '{' || a[count - 1] == '}')
a[count] -= 32;
}
count++;
}
return (a);
}
