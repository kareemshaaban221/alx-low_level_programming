#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 *
 * @size: size of the array to be created.
 * @c: char with which to initialize the array.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}