#include <stdio.h>
#include <stdlib.h>

/**
 * getChar - Char exchange
 * Description: 'Char exchange'
 * @i: Descrption
 * @out: Description
 * Return: void (Success)
 */

void getChar(int i, char *out)
{
	int fdig, sdig;

	fdig = i / 10;
	sdig = i % 10;

	out[0] = '0' + fdig;
	out[1] = '0' + sdig;
}

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	char *tmp = malloc(sizeof(char) * 2);

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			getChar(i, tmp);
			putchar(tmp[0]);
			putchar(tmp[1]);

			putchar(' ');

			getChar(j, tmp);
			putchar(tmp[0]);
			putchar(tmp[1]);

			if (i == 98)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
