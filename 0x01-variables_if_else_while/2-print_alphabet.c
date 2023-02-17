#include <stdio.h>

/**
 * main - print all alphabets in lowercase
 * Return: 0-success
 */
int main(void)
{
char c = 'a';
while (c != 'z')
{
putchar("%c",c);
c += 1;
}
return (0);
}
