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
 * min - concate
 * @a: the string to concatenate
 * @b: the string to conc
 * Return: the concatenated string
*/
int min(int a, int b)
{
if (a <= b)
return (a);
else
return (b);
}

/**
 * string_nconcat - concate
 * @s1: the string to concatenate
 * @s2: the string to conc
 * @n: the number of characters to conc
 * Return: the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1 = _strlen(s1);
int len2 = _strlen(s2);
char *res = malloc((len1 + min(len2, n) + 1) * sizeof(char));
int i;

if (res == NULL)
return (NULL);

for (i = 0; i < len1; i++)
res[i] = s1[i];

for (i = 0; i < min(len2, n); i++)
res[i + len1] = s2[i];

res[len1 + i] = '\0';

return (res);
}
