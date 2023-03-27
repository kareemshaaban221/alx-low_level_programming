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
 * swap_int - function
 * @a: pointer
 * @b: pointer
 * return: void
 */
void swap_int(int *a, int *b)
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

	for (i = 0; i < n / 2; i++)
	{
		swap_int(s + i, s + n - i - 1);
	}
}
