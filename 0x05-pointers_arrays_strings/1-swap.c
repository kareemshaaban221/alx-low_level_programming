#include "main.h"

/**
 * swap_int - function
 * @a: pointer
 * @b: pointer
 * return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
