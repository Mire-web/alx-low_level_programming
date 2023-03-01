#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare against
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int total_s1 = 0;
int total_s2;
int final_total = 0;
while (*s1 != '\0')
{
total_s1 += *s1;
s1++;
}
total_s2 = 0;
while (*s2 != '\0')
{
total_s2 += *s2;
s2++;
}
final_total = total_s1 - total_s2;
if (final_total < 0)
return (-15);
else if (final_total == 0)
return (0);
else
return (15);
}
