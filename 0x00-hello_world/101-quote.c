#include <unistd.h>

/**
 * main - a program to print a quote to standard error
 * Return: always 1;
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (1);
}
