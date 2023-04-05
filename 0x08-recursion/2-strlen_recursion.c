#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 **/
int _strlen_recursion(char *s)
{
char *ss = s;

if (*ss == '\0')
{
return (0);
}

return (_strlen_recursion(ss + 1) + 1);

}
