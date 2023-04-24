#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a grid
 * @grid: the grid to free
 * @height: the grid height
 * Return: no return value
*/
void free_grid1(char **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

/**
 * tmp - Some description of the function goes here
 * @s: first parameter of the function, indicating...
 * @len: second parameter of the function, indicating...
 * @i: third parameter of the function, indicating...
 * @j: fourth parameter of the function, indicating...
 * @k: pointer to integer, indicating...
 * @res: pointer to a pointer to char, used to...
 * @ss: pointer to char, indicating...
 * @str: pointer to char, indicating...
 *
 * Return: What does the function return, if anything?
 */
int tmp(int s, int len, int j, int *k, char **res, char *ss, char *str)
{
ss = malloc(len);
if (ss == NULL)
{
free_grid1(res, *k);
return (1);
}
ss[len - 1] = '\0';
for (j = 0; ss[j] != '\0'; j++)
ss[j] = str[s + j];
res[(*k)++] = ss;

return (0);
}

/**
* strtow - Main Entry
* @str: input
* Return: 0
*/
char **strtow(char *str)
{
int i = 0, j = 0, k = 0, len = 1, s = 0, e = 0;
char **res;
char *ss = NULL;

if (str == NULL)
return (NULL);
for (; str[i] != '\0'; i++)
{
if (str[i++] == ' ')
len++;
while (str[i] == ' ')
i++;
}
if (i == 0)
return (NULL);
res = malloc(sizeof(char *) * (len + 1));
if (res == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
e = i - 1;
if (tmp(s, e - s + 2, j, &k, res, ss, str) == 1)
return (NULL);
}

while (str[i] == ' ')
{
i++;
s = i;
}
}
e = i - 1;
if (tmp(s, e - s + 2, j, &k, res, ss, str) == 1)
return (NULL);
res[k] = NULL;
return (res);
}
