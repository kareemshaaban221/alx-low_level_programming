#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function
 * @a: char **
 * Return: char *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *s;

	for (i = 0; i < 8; i++)
	{
		s = a[i];
		j = 0;
		while (j < 8)
		{
			_putchar(*s);
			s++;
			j++;
		}
		_putchar('\n');
	}
}
