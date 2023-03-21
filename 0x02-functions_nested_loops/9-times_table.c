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
 * Return: 0 (success)
 */
void times_table(void)
{
	int i, j, tmp;

	for (i = 0; i < 10; i++)
	{
		tmp = 0;
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			tmp += i;
			if (tmp > 9)
			{
				_putchar(' ');
				printComposite(tmp);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + tmp);
			}

			if (j != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
