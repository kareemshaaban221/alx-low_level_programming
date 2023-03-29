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
	int flag = 0;

	while (*src != '\0' && n > 0)
	{
		if (*dest == '\0')
			flag = 1;
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	if (flag == 1)
		*dest = '\0';

	return (res);
}
