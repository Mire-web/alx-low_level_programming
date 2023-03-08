#include "main.h"

/**
 * is_prime - check primality of a number
 *
 * @n: int to against
 * @a: int to check with
 * Return:int
 */

int is_prime(int n, int a)
{
if (a == 1)
return (1);
if (n % a == 0 && a > 0)
return (0);
return (is_prime(n, n - 1));
}

/**
 * is_prime_number- return the result of prime checking
 *
 * @n: int to find root
 * Return: int
 */

int is_prime_number(int n)
{
if (n <= 1)
return(0);
return (is_prime(n, n - 1));
}
