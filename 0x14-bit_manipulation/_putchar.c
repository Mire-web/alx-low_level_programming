#include "main.h"

/*
 * _putchar - print a character
 * @c: character to print
 * Return: int
 */

int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}
