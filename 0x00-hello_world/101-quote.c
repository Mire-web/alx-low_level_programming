#include <unistd.h>

/**
 * main - a program to print a quote to standard error
 * return: always 0
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 42);
return (1);
}
