#include "main.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
int len = 0;

if (!s)
return (-1);

while (*s != '\0')
{
if (*s < '0' || *s > '1')
return (-1);
len++;
s++;
}

return (len);
}

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

/**
 * binary_to_uint - anfpdi
 * @b: afdo
 * Return: fofds
*/
unsigned int binary_to_uint(const char *b)
{
uint res = 0, len = _strlen(b), i = 0, max;

if (len == -1)
return (0);

if (len == 1)
return (*b - '0');

max = _pow_recursion(2, len - 1);
for (; i < len; i++)
{
res += max * (b[i] - '0');
max /= 2;
}

return (res);
}
