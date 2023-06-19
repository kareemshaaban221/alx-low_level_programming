#include "main.h"

/**
 * _abs - Entry point
 * Description: 'main function'
 * @n: integer
 * Return: integer (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
