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
	_putchar('0' + h);
}

/**
 * jack_bauer - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; m < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				printNormal(h);
			}
			else
			{
				printComposite(h);
			}

			if (m < 10)
			{
				printNormal(m);
			}
			else
			{
				printComposite(m);
			}
		}
	}
}
