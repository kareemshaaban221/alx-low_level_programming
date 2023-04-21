#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - sum args from variadic args
 * @separator: string to print
 * @n: number of args
 * Return: No @return value
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

if (n == 0)
{
printf("\n");
return;
}

va_start(args, n);

for (i = 0; i < n - 1; i++)
{
if (separator == NULL)
printf("%d", va_arg(args, int));
else
printf("%d%s", va_arg(args, int), separator);
}

printf("%d\n", va_arg(args, int));

va_end(args);
}
