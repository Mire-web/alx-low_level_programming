#include "main.h"

/**
 * get_endianness - Get the endianness object
 *
 * Return: int
 */

int get_endianness(void)
{
unsigned int num = 1;
char *endian = (char *) &num;
return (*endian == 1 ? 1 : 0);
}
