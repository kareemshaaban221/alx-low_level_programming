#include <stdio.h>
#include <stdarg.h>

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
 * ending - sum args from variadic args
 * @args: string to print
 * Return: No @return value
*/
void ending(va_list args)
{
printf("\n");
va_end(args);
}

/**
 * inTarget - sum args from variadic args
 * @c: string to print
 * Return: int
*/
int inTarget(char c)
{
return c == 'c' || c == 'i' || c == 'f' || c == 's' ? 1 : 0;
}

/**
 * print_all - sum args from variadic args
 * @format: string to print
 * Return: No @return value
*/
void print_all(const char * const format, ...)
{
unsigned int i, n;
char *tmp;
va_list args;
if (!format)
{
printf("\n");
return;
}
n = _strlen((char *) format);
va_start(args, format);
i = 0;
while (i < n)
{
if (i > 0 && inTarget(format[i]) == 1)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
tmp = va_arg(args, char *);
printf("%s", tmp == NULL ? "(nil)" : tmp);
break;
default:
break;
}
i++;
}
ending(args);
}
