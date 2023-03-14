#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @the_grid: 2d the_grid
 * @height: height dimension of the_grid
 * Description: frees memory of the_grid
 * Return: nothing
 *
 */

void free_grid(int **the_grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(the_grid[i]);
}
free(the_grid);
}
