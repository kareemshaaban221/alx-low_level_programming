#include "main.h"
#include <stdio.h>

/**
 * _strchr - function
 * @s: pointer
 * @c: char
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	char *ss = s;

	while (*ss != '\0')
	{
		if (*ss == c)
			return (ss);
		ss++;
	}

	return (NULL);
}
