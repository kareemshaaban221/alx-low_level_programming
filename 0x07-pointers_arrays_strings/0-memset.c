#include "main.h"

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

	while (*ss != '\0' && n--)
	{
		*ss = b;
		ss++;
	}

	return (s);
}
