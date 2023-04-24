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
int i, j, k;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

len += ac;

res = malloc(sizeof(char) * (len + 1));

if (res == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
res[k++] = av[i][j];

if (res[k] == '\0')
res[k++] = '\n';
}

return (res);
}
