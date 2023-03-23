#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers
 * @...: other parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator == NULL || i == (n - 1))
		continue;
		printf("%s", separator);
	}
	putchar('\n');
}
