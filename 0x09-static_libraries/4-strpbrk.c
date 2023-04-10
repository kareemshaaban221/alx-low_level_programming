#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @s: pointer
 * @accept: char
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	char *ss = s;
	char *ac = accept;

	while (*ss != '\0')
	{
		while (*ac != '\0')
		{
			if (*ac == *ss)
				return (ss);

			ac++;
		}

		ss++;
		ac = accept;
	}

	return (NULL);
}
