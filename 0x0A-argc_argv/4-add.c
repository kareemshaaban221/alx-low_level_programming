#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - check if string is a number or not
 * @s: input string
 * Return: integer boolean 0 or 1
*/
int isNumber(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (isdigit(s[i]) == 0)
return (0);
}
return (1);
}

/**
* main - entry point
* @argc: count of cli arguments
* @argv: command line arguments
* Return: integer
*/
int main(int argc, char **argv)
{
int res = 0;
int n = 0;
char *tmp = 0;

if (argc > 1)
{
n = argc - 1;
while (n)
{
tmp = argv[argc - n];
if (!isNumber(tmp))
{
printf("Error\n");
return (1);
}

res += atoi(tmp);
n--;
}
}

printf("%d\n", res);

return (0);
}
