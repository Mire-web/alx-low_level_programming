#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int n;
  n = 20;
  putchar((n/10)+'0');
  putchar((n%10)+'0');
  putchar('\n');
   return (0);
}
