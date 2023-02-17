#include <stdio.h>

/**
 * main - print all alphabets in lowercase
 * Return: 0-success
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c == 'q' || c == 'e')
{
c += 1;
}
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
