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
if (*s != '0' && *s != '1')
return (-1);
len++;
s++;
}

return (len);
}

/**
 * binary_to_uint - anfpdi
 * @b: afdo
 * Return: fofds
*/
unsigned int binary_to_uint(const char *b)
{
uint res = 0, min = 1;
int i = 0;
int len = _strlen((char *) b);

if (len == -1)
return (0);

if (len == 0)
return (0);

for (i = len - 1; i >= 0; i--)
{
res += min * (b[i] - '0');
min *= 2;
}

return (res);
}
