#include "main.h"

/**
 * _strcpy - function
 * @dest: pointer
 * @src: pointer
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	char *res = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (res);
}
