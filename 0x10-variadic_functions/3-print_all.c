#include <stdio.h>
#include <stdarg.h>

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
 * print_all - sum args from variadic args
 * @format: string to print
 * Return: No @return value
*/
void print_all(const char * const format, ...)
{
unsigned int i, n = 0;
char *f = format;
va_list args;
while (f != '\0')
{
if (*f == 'c' || *f == 'i' || *f == 'f' || *f == 's')
n++;
f++;
}
va_start(args, n);
i = 0;
while (i < n)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, char));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, float));
break;
case 's':
printf("%s", va_arg(args, char *));
break;
default:
break;
}
i++;
if (i < n)
printf(", ");
}
ending(args);
}
