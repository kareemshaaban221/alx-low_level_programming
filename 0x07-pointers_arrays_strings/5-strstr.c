#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 * @haystack: pointer
 * @needle: char
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;
	char *res = h;

	while (*h != '\0')
	{
		res = h;
		while (*n != '\0' && h != '\0')
		{
			if (*h == *n)
				h++;
			else
				break;

			n++;
		}

		if (*n == '\0')
			return (res);

		h++;
		n = needle;
	}

	return (NULL);
}
