#include "main.h"

/**
 * _isalpha - Entry point
 * Description: 'main function'
 * @c: Description int char
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if (c < 'A' || c > 'z')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);

	return (1);
}
