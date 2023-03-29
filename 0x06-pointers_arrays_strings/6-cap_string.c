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

	while (*ss != '\0')
	{
		if (check(*ss) == 1)
		{
			ss++;
			while (check(*ss) == 1)
				ss++;
			if (*ss >= 'a' && *ss <= 'z')
				*ss -= ('a' - 'A');
		}

		ss++;
	}

	return (s);
}
