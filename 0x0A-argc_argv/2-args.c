#include <stdio.h>
#include <stdlib.h>

/**
 * main - print command line args
 *
 * @argc: command line argument counter
 * @argv: Array of strings
 * Return:int
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
