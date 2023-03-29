#include "main.h"

/**
 * check - function
 * @ss: char
 * Return: int
 */
int check(char ss)
{
	char *v = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	ss = (ss >= 'A' && ss <= 'Z') ? v[ss - 'A'] : ss;
	ss = (ss >= 'a' && ss <= 'z') ? v[ss - 'a' + 26] : ss;

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
