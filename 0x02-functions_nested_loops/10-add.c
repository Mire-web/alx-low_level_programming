#include "main.h"

/**
 * add - print the 9 times table
 * Return: int ;
 */

int add(int n, int j)
{
int result = n + j;
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
return(0);
}
