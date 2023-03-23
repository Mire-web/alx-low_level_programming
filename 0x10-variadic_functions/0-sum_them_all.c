#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sum all int args
 *
 * @n: number of elements
 * @...: parameters
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list argparam;

	va_start(argparam, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	sum += va_arg(argparam, int);

	va_end(argparam);
	return (sum);
}
