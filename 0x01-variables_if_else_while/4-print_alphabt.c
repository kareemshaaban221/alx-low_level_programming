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
		if (c == 'q' || c == 'e')
			continue;
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
	putchar('\n');
	return (0);
}
