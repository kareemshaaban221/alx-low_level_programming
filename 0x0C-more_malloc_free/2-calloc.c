#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate
 * @nmemb: the number of bytes
 * @size: the size of the
 * Return: the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
int i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
*(ptr + i) = 0;

return (ptr);
}
