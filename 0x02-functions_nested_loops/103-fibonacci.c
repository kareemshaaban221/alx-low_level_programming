#include <stdio.h>

/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	long n1 = 1, n2 = 2, tmp, sum = 2;

	while (n1 + n2 <= 4000000)
	{
		tmp = n1 + n2;
		if (tmp % 2 == 0)
			sum += tmp;
		n1 = n2;
		n2 = tmp;
	}
	printf("%ld\n", sum);

	return (0);
}
