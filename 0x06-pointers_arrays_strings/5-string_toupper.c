#include "main.h"

/**
 * string_toupper - function
 * @s: pointer
 * Return: char *
 */
char *string_toupper(char *s)
{
	char *ss = s;

	while (*ss != '\0')
	{
		if (*ss >= 'a' && *ss <= 'z')
			*ss -= ('a' - 'A');
		ss++;
	}

	return (s);
}
