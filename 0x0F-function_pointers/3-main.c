#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char **argv)
{
int n1, n2, res;
char *op;

if (argc < 4)
{
printf("Error\n");
exit(98);
}

n1 = atoi(argv[1]);
op = argv[2];
n2 = atoi(argv[3]);

if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' || *op == '%') && (n2 == 0))
{
printf("Error\n");
exit(100);
}

if (get_op_func(op))
res = (get_op_func(op))(n1, n2);
else
return (1);

printf("%d\n", res);

return (0);
}
