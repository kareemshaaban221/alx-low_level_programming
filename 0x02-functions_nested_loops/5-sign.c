#include "main.h"

/**
 * print_sign - Entry point
 * Description: 'main function'
 * @n: integer
 * Return: 0 (success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('0');
	return (0);
}
