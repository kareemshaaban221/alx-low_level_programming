#include "main.h"

/**
 * _strncat - function
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (res);
}
