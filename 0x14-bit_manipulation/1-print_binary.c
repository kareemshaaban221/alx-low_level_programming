#include "main.h"

/**
 * helper - asjdgpo
 * @n: asdjfop
 * Return: asdfoa
*/
void helper(unsigned long int n)
{
if (n == 0)
return;

helper(n >> 1);
_putchar((n & 1) + '0');
}

/**
 * print_binary - amdspo
 * @n: ajgpodf
 * Return: amdpos
*/
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}

helper(n);
}
