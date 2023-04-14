#include "main.h"
#include <stdlib.h>

/**
 * array_range - array
 * @min: kf
 * @max: kf
 * Return: array_range
*/
int *array_range(int min, int max)
{
int *arr;
int n = max - min + 1;
int i;

if (min > max)
return (NULL);

arr = malloc(n * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; i < n; i++)
{
arr[i] = min++;
}

return (arr);
}
