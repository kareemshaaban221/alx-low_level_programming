#include "main.h"

/**
 * _puts - function
 * @str: pointer
 * return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
