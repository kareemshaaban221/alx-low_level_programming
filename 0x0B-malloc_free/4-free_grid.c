#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a grid
 * @height: the grid height
 * Return: no return value
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
