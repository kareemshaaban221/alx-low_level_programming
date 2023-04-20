#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: the name
 * @f: the function
 * Return: the value
*/
void print_name(char *name, void (*f)(char *))
{
if (f)
(*f)(name);
}
