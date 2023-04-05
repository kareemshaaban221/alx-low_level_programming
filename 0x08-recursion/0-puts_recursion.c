#include "main.h"

/**
 *_puts_recursion - Prints a string using recursion
 *@s: Pointer to string
 *Return: void
 */
void _puts_recursion(char *s)
{
char *ss = s;

if (*ss == '\0')
{
_putchar('\n');
return;
}

_putchar(*ss);
_puts_recursion(++ss);

}
