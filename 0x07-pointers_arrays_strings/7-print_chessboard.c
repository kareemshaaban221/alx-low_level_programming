#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function
 * @a: char **
 * Return: char *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	char *s;

	for (i = 0; i < 8; i++)
	{
		s = a[i];
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
	}
}
