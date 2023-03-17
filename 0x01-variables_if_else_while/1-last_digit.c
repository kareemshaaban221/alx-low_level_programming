#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'main function'
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");

	printf("\n");
	return (0);
}
