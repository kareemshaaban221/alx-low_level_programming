#include "main.h"

/**
 * puts2 - function
 * @str: pointer
 * return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i == 1)
		{
			i = 0;
			str++;
			continue;
		}
		_putchar(*str);
		str++;
		i = 1;
	}

	_putchar('\n');
}
