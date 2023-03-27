#include "main.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * swap_char - function
 * @a: pointer
 * @b: pointer
 * return: void
 */
void swap_char(char *a, char *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * rev_string - function
 * @s: pointer
 * return: void
 */
void rev_string(char *s)
{
	int n = _strlen(s), i;
	char *c1;
	char *c2;

	for (i = 0; i < n / 2; i++)
	{
		c1 = s + i;
		c2 = s + n - i - 1;
		swap_char(c1, c2);
	}
}
