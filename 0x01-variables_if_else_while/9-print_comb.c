#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '9')
			continue;
		putchar(i);
		putchar(',');
	}

	return (0);
}
