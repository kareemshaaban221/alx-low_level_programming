#include "main.h"

/**
 * get_endianness - sagjsopd
 * Return: int
*/
int get_endianness(void)
{
short tmp = 0x0011;
char *c = (char *) &tmp;

if (*c == 0x11)
return (1);

return (0);
}
