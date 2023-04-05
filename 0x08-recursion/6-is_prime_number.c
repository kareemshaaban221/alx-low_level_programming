#include "main.h"

/**
 * is_prime_number_helper - Calculates the square root of a number recursively
 *@n: The number whose square root is being calculated
 *@i: The current guess for the square root
 *Return: The square root of n or -1 if n does not have a
 */
int is_prime_number_helper(int n, int i)
{
/* i reaches 1 then this number is prime */
if (i <= 1)
return (1);

/* n is dividable by i then n is not prime */
if (n % i == 0)
return (0);

/* try numbers until reach i = 1 */
return (is_prime_number_helper(n, i - 1));
}

/**
 * is_prime_number - Calculates the square root of a number recursively
 *@n: The number whose square root is being calculated
 *Return: The square root of n or -1 if n does not have a
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);


return (is_prime_number_helper(n, n / 2));
}
