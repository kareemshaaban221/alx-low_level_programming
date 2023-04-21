#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - sum args from variadic args
 * @separator: string to print
 * @n: number of args
 * Return: No @return value
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list args;

if (n == 0)
{
printf("\n");
return;
}

va_start(args, n);

for (i = 0; i < n - 1; i++)
{
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
if (separator == NULL)
printf("%s", s);
else
printf("%s%s", s, separator);
}

s = va_arg(args, char *);

printf("%s\n", s == NULL ? "(nil)" : s);

va_end(args);
}
