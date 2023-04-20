#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterator
 * @array: array
 * @size: size
 * @action: action
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action)
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
