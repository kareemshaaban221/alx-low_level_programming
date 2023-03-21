#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: 'main function'
 * @n: integer
 * Return: integer (success)
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar('0' + last);

	return (last);
}
