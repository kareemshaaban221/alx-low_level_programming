#include "main.h"

/**
 * _sqrt_recursion_helper - Calculates the square root of a number recursively
 *@n: The number whose square root is being calculated
 *@i: The current guess for the square root
 *Return: The square root of n or -1 if n does not have a
 */
int _sqrt_recursion_helper(int n, int i)
{
int pow = i * i;

if (pow < n)
{
if (pow * pow < n)
return (_sqrt_recursion_helper(n, pow + 1));
else if (pow * pow == n)
return (pow);
else
return (_sqrt_recursion_helper(n, i + 1));
}

else if (pow == n)
return (i);

else
return (-1);
}

/**
 * _sqrt_recursion - Calculates the square root of a number recursively
 *@n: The number whose square root is being calculated
 *Return: The square root of n or -1 if n does not have a
 */
int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
else if (n < 4)
return (-1);


return (_sqrt_recursion_helper(n, 2));
}
