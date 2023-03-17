#include <stdio.h>

/**
 * printLower - print lower
 * Description: 'printLower function'
 * Return: void (success)
 */

void printLower(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

/**
 * printUpper - print upper
 * Description: 'printUpper function'
 * Return: void (success)
 */

void printUpper(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
}

/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */

int main(void)
{
	printLower();
	printUpper();
	putchar('\n');
	return (0);
}
