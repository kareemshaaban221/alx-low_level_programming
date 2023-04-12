#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a grid
 * @width: the grid width
 * @height: the grid height
 * Return: the new grid
*/
int **alloc_grid(int width, int height)
{
int **res = malloc(sizeof(int *) * width);
int *arr;
int i, j;

if (res == NULL)
return (NULL);

for (i = 0; i < width; i++)
{
res[i] = malloc(sizeof(int) * height);

if (res[i] == NULL)
return (NULL);

for (j = 0; j < height; j++)
{
res[i][j] = 0;
}
}

return (res);
}
