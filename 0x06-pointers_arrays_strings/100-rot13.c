#include "main.h"

/**
 * check - function
 * @ss: char
 * Return: int
 */
int check(char ss)
{
	char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *v = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		if (*s == ss)
		{
			ss = *v;
			break;
		}

		s++;
		v++;
	}

	return (ss);
}

/**
 * rot13 - function
 * @s: pointer
 * Return: char *
 */
char *rot13(char *s)
{
	char *ss = s;

	while (*ss != '\0')
	{
		*ss = check(*ss);
		ss++;
	}

	return (s);
}
