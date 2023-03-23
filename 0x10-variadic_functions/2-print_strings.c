#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 *
 * @separator: string to be printed between strings
 * @n: number of strings
 * @...: string parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *ptr = va_arg(args, char*);

		if (!*(ptr))
		printf("nil");
		else
		printf("%s", ptr);
		if (!separator || i == (n - 1))
		continue;
		printf("%s", separator);
	}
	putchar('\n');
}
