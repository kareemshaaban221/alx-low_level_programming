#include "main.h"
#include <stdio.h>

/**
 * _memset - function
 * @s: pointer
 * @b: char
 * @n: int
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ss = s;

	while (n-- > 0)
	{
		*ss = b;
		ss++;
	}

	return (s);
}
