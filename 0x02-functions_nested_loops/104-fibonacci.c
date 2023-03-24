#include <stdio.h>
#include <string.h>
#include <math.h>

#define push(sp, n) (*((sp)++) = (n))
#define pop(sp) (*--(sp))

char *sumBigInt(char *n1, char *n2)
{
	char *res;

	int stack[1000];

	int *sp;

	int l1 = strlen(n1), l2 = strlen(n2), minlen, maxlen, i, j, rem, tmp1, tmp2, tmpres, reslen;

	sp = stack;

	minlen = min(l1, l2);
	maxlen = max(l1, l2);

	for (i = minlen - 1, j = maxlen - 1, rem = 0; i >= 0; i--, j--) {
		if(l1 > l2)
		{
			tmp1 = n1[j] - '0';
			tmp2 = n2[i] - '0';
		}
		else
		{
			tmp2 = n2[j] - '0';
			tmp1 = n1[i] - '0';
		}
		tmpres = tmp1 + tmp2 + rem;

		rem = tmpres / 10;
		push(sp, tmpres % 10);
	}

	if (l1 > l2)
	{
		while (j >= 0)
		{
			tmp1 = n1[j--] - '0';
			tmp1 += rem;
			rem = tmp1 / 10;
			push(sp, tmp1);
		}
	}
	else if (l2 > l1)
	{
		while (j >= 0)
		{
			tmp2 = n2[j--] - '0';
			tmp2 += rem;
			rem = tmp2 / 10;
			push(sp, tmp2);
		}
	}

	if (rem > 0) 
		push(sp, rem);

	reslen = sp - stack;

	
}

/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long n1 = 1, n2 = 2, tmp;

	int i;

	printf("%ld, %ld, ", n1, n2);
	for (i = 0; i < 95; i++)
	{
		tmp = n1 + n2;
		printf("%ld, ", tmp);
		n1 = n2;
		n2 = tmp;
	}
	printf("%ld\n", n1 + n2);

	return (0);
}
