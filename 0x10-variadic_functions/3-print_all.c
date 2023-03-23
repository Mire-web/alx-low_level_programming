#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print all formats
 * @format: parameter formats
 * @...: parameters
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *sep = "";
va_list args;

va_start(args, format);

format_t arg;
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
arg.c = (char)va_arg(args, int);
printf("%s%c", sep, arg.c);
break;
case 'i':
arg.i = (int)va_arg(args, int);
printf("%s%d", sep, arg.i);
break;
case 'f':
arg.f = (float)va_arg(args, double);
printf("%s%f", sep, arg.f);
break;
case 's':
arg.s = (char *)va_arg(args, char *);
if (arg.s == NULL)
{
printf("(nil)");
break;
}
printf("%s%s", sep, arg.s);
break;
default:
break;
}
sep = ", ";
i++;
}
putchar('\n');
va_end(args);
}
