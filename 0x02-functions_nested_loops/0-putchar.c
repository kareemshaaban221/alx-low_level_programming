#include "main.h"

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	_putchar('\n');

	return (0);
}
