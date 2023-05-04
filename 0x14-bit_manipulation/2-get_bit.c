#include "main.h"

/**
 * get_bit - adgkjop
 * @n: adfojg
 * @index: agdjo
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
uint i;

if (n == 0)
{
if (index == 0)
return (0);
else
return (-1);
}

for (i = 0; i <= index && n > 0; i++)
{
if (index == i)
return (n & 1);
n >>= 1;
}

return (-1);
}
