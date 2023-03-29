#include "main.h"

/**
 * check - function
 * @ss: char
 * Return: int
 */
int check(char ss)
{
	char *s = "aAeEoOtTlL";
	char *v = "4433007711";

	while (*s != '\0')
	{
		if (*s == ss)
			return (*v);
		s++;
		v++;
	}

	return (ss);
}

/**
 * leet - function
 * @s: pointer
 * Return: char *
 */
char *leet(char *s)
{
	char *ss = s;

	while (*ss != '\0')
	{
		*ss = check(*ss);
		ss++;
	}

	return (s);
}
