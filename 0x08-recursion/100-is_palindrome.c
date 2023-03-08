#include "main.h"

/**
 * _strlen_recursion - return length of a string
 *
 * @s: pointer to string.
 * Return: int;
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i += 1;
return (i + _strlen_recursion(s + 1));
}
return (i);
}

/**
 * is_pal_check -  check if a word is palindrome
 *
 * @s: pointer to string
 * @start: start index
 * @end: end index
 * Return: int
 */


char is_pal_check(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] == s[end])
return (is_pal_check(s, start + 1, end - 1));
else
return (0);
}

/**
 * is_palindrome - check if a word is a palindrome
 *
 * @s: pointer to char
 * Return:int
 */

int is_palindrome(char *s)
{
return (is_pal_check(s, 0, _strlen_recursion(s) - 1));
}
