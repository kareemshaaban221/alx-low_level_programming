#include "main.h"

/**
 * _strcat - function
 * @dest: pointer
 * @src: pointer
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (res);
}
