#include "main.h"

/**
 * puts2 - function
 * @str: pointer
 * return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i == 1)
		{
			i = 0;
			continue;
		}
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
