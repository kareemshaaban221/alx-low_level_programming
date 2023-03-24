#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void print_number(int n)
{
	int fdig, len = 1, i, div;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	fdig = n / 10;
	len = 1;

	while (fdig)
	{
		len++;
		fdig /= 10;
	}

	for (i = 0, div = 10; i < len - 2; i++)
		div *= 10;

	if (len == 1)
	{
		_putchar('0' + n);
		return;
	}

	while (div > 0)
	{
		_putchar('0' + ((n / div) % 10));
		div /= 10;
	}
}
