#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @n: char
 * Return: Always 0.
 */
void print_triangle(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i + 1; j++)
				_putchar(' ');
			for (j = 0; j < i + 1; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
