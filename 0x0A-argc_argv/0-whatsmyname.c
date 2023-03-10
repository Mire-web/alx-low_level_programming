#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of program
 *
 * @argc: command lline argument counter
 * @argv: Array of strings
 * Return:int
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("My name is %s\n", argv[0]);
return(0);
}
