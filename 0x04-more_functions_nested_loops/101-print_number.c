#include "main.h"

/**
 * print_number - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	int fdig = n / 10, len = 1, i;

	while (fdig)
	{
		len++;
		fdig /= 10;
	}

	char arr[len];

	fdig = n;
	for (i = 0; i < len; i++)
	{
		arr[i] = fdig % 10;
		fdig /= 10;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar('0' + arr[i]);
}
