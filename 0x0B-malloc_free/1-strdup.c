#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
char *ss = s;
int len = 0;

while (*ss != '\0')
{
len++;
ss++;
}

return (len);
}

/**
 * _strdup - Duplicates a given string.
 *
 * @str: string to be duplicated.
 *
 * Return: Pointer to newly allocated
 */
char *_strdup(char *str)
{
char *s = str;
char *res;
int len = _strlen(s);
int i;

if (str == NULL)
return (NULL);

if (len <= 0)
{
res = malloc(1);
res[0] = '\0';
return (res);
}

res = malloc(sizeof(char) * (len + 1));

if (res == NULL)
return (NULL);

for (i = 0; i < len; i++)
res[i] = s[i];

res[len] = '\0';

return (res);
}
