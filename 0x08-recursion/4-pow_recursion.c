#include "main.h"

/**
 *_pow_recursion - Computes the value of @x raised to the powe
 *@x: The base integer.
 *@y: The exponent integer.
 *Return: The factorial of the integer if @n is non-negative. If @n is negative
 *returns -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
