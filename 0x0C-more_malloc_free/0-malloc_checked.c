#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc
 * @b: param
 * Return: void * pointer to allocated
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}