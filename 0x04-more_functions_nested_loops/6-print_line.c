#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: char
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
