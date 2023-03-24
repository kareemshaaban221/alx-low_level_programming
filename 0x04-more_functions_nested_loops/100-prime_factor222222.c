#include <stdio.h>

int main(void)
{
	/*
	unsigned long n = 612852475143l;
	int p = 3;
	int i = 1, j = 0;
	int flag = 0;

	while (n != 1)
	{
		while (n % p == 0)
			n /= p;
		printf("%ld\n", n);
		printf("%d\n", p);
		if (p < 40)
		{
			if (flag == 0)
			{
				p = 6 * i - 1;
				flag = 1;
			}
			else
			{
				p = 6 * i + 1;
				i++;
				flag = 0;
			}
		}
		else
		{
			if (j < 40)
				p = j * j + (j++) - 41;
		}
	}
	*/

	unsigned long int prime = 612852475143;
	unsigned long int i = 3;

	while (i <= prime / 2)
		if (prime % i == 0)
			prime = prime / i;
		else
			i += 2;

	printf("%ld\n", prime);
	printf("%ld\n", i);
	return (0);
}
