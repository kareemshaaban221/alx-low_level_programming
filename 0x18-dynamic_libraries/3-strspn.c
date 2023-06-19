#include "main.h"
#include <stdio.h>

/**
 * _strspn - function
 * @s: char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ss = s;
	char *ac = accept;
	unsigned int res = 0;

	while (*ss != '\0' && *ss != ' ')
	{
		while (*ac != '\0')
		{
			if (*ss == *ac)
			{
				res++;
				break;
			}
			ac++;
		}

		ac = accept;
		ss++;
	}

	return (res);
}
