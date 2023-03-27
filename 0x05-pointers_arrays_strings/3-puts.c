#include "main.h"

/**
 * _puts - function
 * @s: pointer
 * return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
