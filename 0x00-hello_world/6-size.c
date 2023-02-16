#include <stdio.h>
/**
 * main - A program to print sizes of types in different systems
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %ld Byte(s)\n", sizeof(char));
printf("Size of an int: %ld Byte(s)\n", sizeof(int));
printf("Size of a long int: %ld Byte(s)\n", sizeof(long));
printf("Size of a long long int: %ld Byte(s)\n", sizeof(long long));
printf("Size of a float: %ld Byte(s)\n", sizeof(float));
return (0);
}
