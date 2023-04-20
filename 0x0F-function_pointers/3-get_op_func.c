#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - lol
 * @s: the name of the
 * Return: function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

if (s == NULL)
return (NULL);

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}

i++;
}

return (NULL);
}
