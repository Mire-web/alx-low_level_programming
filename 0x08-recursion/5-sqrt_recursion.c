#include "main.h"

/**
 * sqrt_recursion - calculate sqrt of number
 *
 * @n: int to find root
 * @a: current int
 * Return: int
 */

int sqrt_recursion(int n, int a)
{
if (n < 0 || a * a > n)
return (-1);
else if (a * a == n)
return (a);
else
return (sqrt_recursion(n, a + 1));
}

/**
 * _sqrt_recursion - return the square root of a number n.
 *
 * @n: integer n
 * Return: integer
 */

int _sqrt_recursion(int n)
{
sqrt_recursion(n, 0);
}
