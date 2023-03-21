#include "main.h"

/**
 * printComposite - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void printComposite(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

/**
 * printNormal - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void printNormal(int n)
{
	_putchar('0');
	_putchar('0' + n);
}

/**
 * times_table - Entry point
 * Description: 'main function'
 * @n: integer
 * Return: 0 (success)
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = 0;
		_putchar('0');
		_putchar(',');
		for (j = 1; j < n; j++)
		{
			tmp += i;

			if (n >= 10)
				_putchar(' ');

			if (tmp > 9)
			{
				if (tmp < 100)
					_putchar(' ');
				printComposite(tmp);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + tmp);
			}

			if (j != n - 1)
				_putchar(',');
		}

		_putchar('\n');
	}
}
