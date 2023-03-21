#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
