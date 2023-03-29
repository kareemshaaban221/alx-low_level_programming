#include "main.h"

/**
 * _strncpy - function
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest;
	char *tmp = src;
	int flag = 0;

	while (*tmp != '\0' && n > 0)
	{
		if (*res == '\0')
			flag = 1;
		*res = *tmp;
		res++;
		tmp++;
		n--;
	}

	if (flag == 1 || n > 0)
		while (n--)
		{
			*res = '\0';
			res++;
		}

	return (dest);
}
