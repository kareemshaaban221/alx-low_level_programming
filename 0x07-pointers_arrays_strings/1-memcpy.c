#include "main.h"
#include <stdio.h>

/**
 * _memset - function
 * @dest: pointer
 * @src: char
 * @n: int
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest
	char *s = src;

	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}

	return (dest);
}
