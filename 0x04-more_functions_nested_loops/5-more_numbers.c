#include <stdio.h>
#include "main.h"

/**
 * printComposite - Entry point
 * Description: 'main function'
 * @n: normal integer
 * Return: void (success)
 */
void printComposite(int n)
{
	int fdig = n / 10;

	if (fdig >= 10)
	{
		_putchar('0' + fdig / 10);
		fdig %= 10;
	}
	_putchar('0' + fdig);
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
			if (i < 10)
				printNormal(i);
			else
				printComposite(i);
		}
	}
}
