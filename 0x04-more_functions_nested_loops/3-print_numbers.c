#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
