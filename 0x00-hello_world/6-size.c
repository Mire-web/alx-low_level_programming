#include <stdio.h>
/**
 * main - A program to print sizes of types in different systems
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %zu Byte(s)\n", sizeof(char));
printf("Size of an int: %zu Byte(s)\n", sizeof(int));
printf("Size of a long int: %zu Byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu Byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu Byte(s)\n", sizeof(float));
return (0);
}
