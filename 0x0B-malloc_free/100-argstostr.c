#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
char *ss = s;
int len = 0;

if (s == NULL)
return (0);

while (*ss != '\0')
{
len++;
ss++;
}

return (len);
}

/**
 * argstostr - concate
 * @ac: the string to concatenate
 * @av: the string to conc
 * Return: the concatenated string
*/
char *argstostr(int ac, char **av)
{
int len;
char *res;
int i, j;
int tmplen;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
len += _strlen(av[i]) + 1;

res = malloc(sizeof(char) * (len + 1));

if (res == NULL)
return (NULL);

tmplen = 0;
for (i = 0; i < ac; i++)
{
if (i > 0)
{
tmplen += _strlen(av[i - 1]) + 1;
}

for (j = 0; j < _strlen(av[i]); j++)
res[tmplen + j] = av[i][j];

res[tmplen + j] = '\n';
}

res[len + 1] = '\0';

return (res);
}
