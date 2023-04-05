#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 *
 * @s: A pointer to the first character of the string.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
char *ss = s;

if (*ss != '\0')
{
_print_rev_recursion(++ss);
_putchar(*ss);
if (*(ss + 1) == '\0')
{
*(ss + 1) = '\n';
*(ss + 2) = '\0';
}

return;
}

}
