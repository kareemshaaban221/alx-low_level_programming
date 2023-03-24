#include "main.h"
#include <stdio.h>

/**
 * printComposite - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void printComposite(int n)
{
	if (n >= 10)
		_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			printComposite(i);
		}
		_putchar('\n');
	}
}
