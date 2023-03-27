#include "main.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - function
 * @s: pointer
 * return: void
 */
void puts_half(char *s)
{
	int len = _strlen(s), i, odd = 0;

	if (len % 2 == 1)
		odd = 1;
	for (i = len - 1; i >= len / 2 + odd; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
