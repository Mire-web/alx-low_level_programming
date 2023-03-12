#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}

if (f == 0)
return (0);

return (n);
}

/**
 * check_str_n_num - check if there is st among digit
 * @str: pointer to string
 * Return:int
 */

int check_str_n_num(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
if (!isdigit(str[i]))
return (1);
}
return (0);
}

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
int result = 0;
for (i = 1; i < argc; i++)
{
if (argc < 2)
{
printf("0\n");
return (0);
}
if (!_atoi(argv[i]) || check_str_n_num(argv[i])
{
printf("Error\n");
return (1);
}
result += _atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
