#include <stdio.h>
/**
 * main - A program to print sizes of types in different systems
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu Byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu Byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu Byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu Byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu Byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
