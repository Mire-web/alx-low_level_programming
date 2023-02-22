#include "main.h"

/**
 * _isalpha - check if alphabet is in lowwercase
 * @c:  parameter
 * Return: 1 if c is lower 0 otherwise;
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
