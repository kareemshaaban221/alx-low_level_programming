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

if (len <= 0)
{
res = malloc(1);
res[0] = '\0';
return (res);
}

res = malloc(sizeof(char) * len);

if (res == NULL)
return (NULL);

for (int i = 0; i < len; i++)
res[i] = s[i];

return (res);
}
