#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - free memory
 *@grid: 2 dimensional array
 *@height: height of the array
 *
 *Return: Void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);

}
