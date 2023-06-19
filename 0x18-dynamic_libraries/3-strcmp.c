#include "main.h"

/**
 * _strcmp - function
 * @s1: pointer
 * @s2: pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	char *ss1 = s1;
	char *ss2 = s2;
	int res = 0;

	while (*ss1 != '\0')
	{
		if (*ss1 != *ss2)
		{
			res = *ss1 - *ss2;
			break;
		}
		ss1++;
		ss2++;
	}

	if (res == 0)
		if (*ss1 != *ss2)
			res = *ss1 - *ss2;

	return (res);
}
