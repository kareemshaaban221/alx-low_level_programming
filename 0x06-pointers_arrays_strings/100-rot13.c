#include "main.h"

/**
 * check - function
 * @ss: char
 * Return: int
 */
int check(char ss)
{
	char *v = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (ss >= 'A' && ss <= 'Z')
		ss = v[ss - 'A'];
	else if (ss >= 'a' && ss <= 'z')
		ss = v[ss - 'a' + 26];

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
