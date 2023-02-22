#include <stdio.h>
/**
 * main - entry point
 * Return:int
 */
int main(void)
{
int count;
unsigned long n = 0, n2 = 1, sum;
unsigned long n_half1, n_half2, n2_half1, n2_half2;
unsigned long half1, half2;
for (count = 0; count < 92; count++)
{
sum = n + n2;
printf("%lu, ", sum);
n = n2;
n2 = sum;
}
n_half1 = n / 10000000000;
n2_half1 = n2 / 10000000000;
n_half2 = n % 10000000000;
n2_half2 = n2 % 10000000000;
for (count = 93; count < 99; count++)
{
half1 = n_half1 + n2_half1;
half2 = n_half2 + n2_half2;
if (n_half2 + n2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
printf(", ");
n_half1 = n2_half1;
n_half2 = n2_half2;
n2_half1 = half1;
n2_half2 = half2;
}
printf("\n");
return (0);
}
