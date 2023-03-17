#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = (int) '0'; i <= (int) '9'; i++)
	{
		putchar((char) i);
	}
	putchar('\n');
	return (0);
}
