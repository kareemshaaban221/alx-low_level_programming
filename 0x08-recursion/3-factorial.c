#include "main.h"

/**
 *factorial - Recursively computes the factorial of a given positive integer
 *@n: The integer to calculate the factorial of
 *Return: The factorial of the integer if @n is non-negative. If @n is negative
 *returns -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (1);

return (n * factorial(n - 1));
}
