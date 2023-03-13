#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print minimum change to be given
 *
 * @argc: argument count
 * @argv: arguments
 * Return:int:
 */

int main(int argc, char *argv[])
{
int coin[] = {25, 10, 5, 2, 1};
int i;
int min = 0;
int num = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (num < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5 && num >= 0; i++)
{
while (num >= coin[i])
{
min++;
num -= coin[i];
}
}
printf("%d\n", min);
return (0);
}
