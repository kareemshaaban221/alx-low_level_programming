#include "main.h"

/**
 * check - function
 * @ss: char
 * Return: int
 */
int check(char ss)
{
	char *s = " \t\n,;.!?\"(){}";

	while (*s != '\0')
	{
		if (*s == ss)
			return (1);
		s++;
	}

	return (0);
}

/**
 * cap_string - function
 * @s: pointer
 * Return: char *
 */
char *cap_string(char *s)
{
	char *ss = s;

	if (*ss >= 'a' && *ss <= 'z')
		*ss -= ('a' - 'A');

	ss++;

	while (*ss != '\0')
	{
		while (check(*ss) == 1 && *ss != '\0')
			ss++;
		if (check(*(ss - 1)) == 1)
			if (*ss >= 'a' && *ss <= 'z')
				*ss -= ('a' - 'A');

		ss++;
	}

	return (s);
}
