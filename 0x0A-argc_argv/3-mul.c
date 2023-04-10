#include <stdio.h>

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * convert - Entry point
 * Description: 'main function'
 * @s: normal integer
 * Return: res (success)
 */
int convert(char *s)
{
int w = 1;
int res = 0;
int len = _strlen(s);
int i;
int tmp = 0;

for (i = len - 1; i >= 0; i--)
{
tmp = s[i] - '0';
res = res + (tmp *w);
w *= 10;
}

return (res);
}

/**
 * main - entry point
 * @argc: count of cli arguments
 * @argv: command line arguments
 * Return: integer
*/
int main(int argc, char **argv)
{
if (argc < 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", convert(argv[1]) * convert(argv[2]));

return (0);
}
