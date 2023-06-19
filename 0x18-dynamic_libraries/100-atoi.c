#include "main.h"

/**
 * toInteger - to inetger
 * @s: start pointer
 * @e: end pointer
 * @negn: negation
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
int _atoi(void)
{

}
