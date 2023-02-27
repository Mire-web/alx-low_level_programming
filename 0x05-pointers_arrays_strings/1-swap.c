#include "main.h"
/**
 * swap_int - swap int values
 * @b: pointer2
 * @a: pointer
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
