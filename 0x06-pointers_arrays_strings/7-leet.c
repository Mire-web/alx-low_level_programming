#include "main.h"

/**
 * leet - leeet code
 * @a: pointer to string
 * Return: Char *
 */

char *leet(char *a)
{
char alpha[] = "aAEeoOtTlL";
char s1[] = "4433007711";
int count = 0;
int characterCount;
while (a[count] != '\0')
{
characterCount = 0;
while (characterCount <= 10)
{
if (a[count] == alpha[characterCount])
a[count] = s1[characterCount];
characterCount++;
}
count++;
}
return (a);
}
