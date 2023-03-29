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

/**
 * reverse_array - function
 * @a: pointer
 * @n: pointer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap_int(a + i, a + n - i - 1);
	}
}
