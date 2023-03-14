#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @argc: int input
 * @argv: double pointer array
 * Return: 0
 */

char *argstostr(int argc, char **argv)
{
int i, n, r = 0, l = 0;
char *str;
if (argc == 0 || argv == NULL)
return (NULL);
for (i = 0; i < argc; i++)
{
for (n = 0; argv[i][n]; n++)
l++;
}
l += argc;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < argc; i++)
{
for (n = 0; argv[i][n]; n++)
{
str[r] = argv[i][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
