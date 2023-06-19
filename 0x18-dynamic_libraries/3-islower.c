#include "main.h"

/**
 * _islower - check if alphabet is in lowercase
 * @c:  parameter for checks
 * Return: 1 if c is lower 0 otherwise;
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
