#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @breadth: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int breadth, int height)
{
int **ptrr;
int x, y;
if (breadth <= 0 || height <= 0)
return (NULL);
ptrr = malloc(sizeof(int *) * height);
if (ptrr == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
ptrr[x] = malloc(sizeof(int) * breadth);
if (ptrr[x] == NULL)
{
for (; x >= 0; x--)
free(ptrr[x]);
free(ptrr);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < breadth; y++)
ptrr[x][y] = 0;
}
return (ptrr);
}
