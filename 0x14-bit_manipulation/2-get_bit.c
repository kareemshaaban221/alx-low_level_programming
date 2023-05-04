#include "main.h"

/**
 * get_bit - adgkjop
 * @n: adfojg
 * @index: agdjo
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
return (-1);

return ((n >> index) & 1);
}
