#include <stdio.h>
#include <stdlib.h>

/**
 * main - print main operation codes
 *
 * @argc: argument count
 * @argv: array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
int i;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;
for (i = 0; i < atoi(argv[i]); i++)
{
if (i == atoi(argv[i]))
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx\n", arr[i]);
}
return (0);
}
