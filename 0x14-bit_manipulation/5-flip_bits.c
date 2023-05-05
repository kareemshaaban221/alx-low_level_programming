#include "main.h"

/**
 * flip_bits - adogjo
 * @n: ajgdpo
 * @m: aojrdf
 * Return: aspgdnmo
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
uint res = 0;

if (n == m)
return (0);

while (n && m)
{
if((n & 1) != (m & 1))
res++;

n >>= 1;
m >>= 1;
}

while (n)
{
if ((n & 1) == 1)
res++;

n >>= 1;
}

while (m)
{
if ((m & 1) == 1)
res++;

m >>= 1;
}

return (res);
}
