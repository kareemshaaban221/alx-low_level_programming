#include "main.h"

/**
 * _strlen - function
 * @s: pointer
 * return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
}
