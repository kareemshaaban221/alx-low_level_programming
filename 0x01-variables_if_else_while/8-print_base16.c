#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, c;

	for (i = '0', c = 'a'; i <= '9' || c >= 'f'; i++)
	{
		if (i > '9')
			putchar(c++);
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
