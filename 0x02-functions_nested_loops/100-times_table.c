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
	int i, j, tmp;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i < n + 1; i++)
	{
		tmp = 0;
		_putchar('0');
		_putchar(',');
		for (j = 1; j < n + 1; j++)
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

			if (j != n)
				_putchar(',');
		}

		_putchar('\n');
	}
}
