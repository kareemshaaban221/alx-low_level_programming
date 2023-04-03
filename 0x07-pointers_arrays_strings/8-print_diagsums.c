#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: pointer
 * @size: char
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int dia = 0;
	int sum1 = a[dia];
	int sum2;

	for (i = size; i <= size * size; i += size)
	{
		dia += size + 1;
		sum1 += a[dia];
	}

	dia = size - 1;
	sum2 = a[dia];

	for (i = size; i <= size * size; i += size)
	{
		dia += size - 1;
		sum2 += a[dia];
	}

	printf("%d, %d\n", sum1, sum2);
}
