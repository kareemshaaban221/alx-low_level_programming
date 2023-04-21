#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum args from variadic args
 * @n: number of args
 * Return: sum of them all
*/
int sum_them_all(const unsigned int n, ...)
{
int i, res = 0;
va_list args;

if (n <= 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
res += va_arg(args, int);
}

va_end(args);

return (res);
}
