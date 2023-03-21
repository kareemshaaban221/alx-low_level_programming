#include <stdio.h>

/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i += 3)
	{
		sum += i;
	}

	for (i = 5; i < 1024; i += 5)
	{
		if (i % 3 == 0)
			continue;
		sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
