char _putchar (char a)
{
return putchar(a);
}

int print_alphabet ()
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
return (0);
}
