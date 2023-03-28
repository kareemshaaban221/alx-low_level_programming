#include "main.h"

/**
 * toInteger - to inetger
 * @s: start pointer
 * @e: end pointer
 * Return: integer
 */
int toInteger(char *s, char *e, int negn)
{
	int w = 1, res = 0;

	while (e >= s)
	{
		if (negn == -1)
			res -= ((*(e) - '0') * w);
		else
			res += ((*(e) - '0') * w);
		if (e != s)
			w *= 10;
		e--;
	}

	return (res);
}

/**
 * _atoi - lol
 * @s: char *
 * Return: int
 */
int _atoi(char *s)
{
	char *tmp;
	int negn = 0;

	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
			negn = (negn + 1) % 2;
		s++;
	}

	tmp = s;
	while ((*tmp >= '0' && *tmp <= '9') && *tmp != '\0')
	{
		tmp++;
	}

	tmp--;
	if (negn == 1)
		negn = -1;
	else
		negn = 1;

	return (toInteger(s, tmp, negn));
}
