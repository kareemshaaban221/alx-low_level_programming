#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - iterator
 * @array: array
 * @size: size
 * @cmp: action
 * Return: int
*/
int int_index(int *array, size_t size, int (*cmp)(int))
{
size_t i;

if (size <= 0)
return (-1);

if (cmp && array)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
}

return (-1);
}
