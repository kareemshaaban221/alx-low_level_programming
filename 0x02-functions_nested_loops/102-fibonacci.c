#include <stdio.h>

/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	long n1 = 1, n2 = 2, tmp;

	int i;

	printf("%ld, %ld, ", n1, n2);
	for (i = 0; i < 47; i++)
	{
		tmp = n1 + n2;
		printf("%ld, ", tmp);
		n1 = n2;
		n2 = tmp;
	}
	printf("%ld\n", n1 + n2);

	return (0);
}
