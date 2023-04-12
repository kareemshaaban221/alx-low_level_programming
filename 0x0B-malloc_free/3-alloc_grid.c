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
int **res = malloc(sizeof(int *) * height);
int i, j;

if (res == NULL)
{
free(res);
return (NULL);
}

for (i = 0; i < height; i++)
{
res[i] = malloc(sizeof(int) * width);

if (res[i] == NULL)
{
while (i >= 0)
free(res[i--]);

free(res);
return (NULL);
}

for (j = 0; j < width; j++)
{
res[i][j] = 0;
}
}

return (res);
}
