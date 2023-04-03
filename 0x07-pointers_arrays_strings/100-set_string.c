#include "main.h"
#include <stdio.h>

/**
 * set_string - function
 * @s: pointer
 * @to: char
 * Return: char *
 */
void set_string(char **s, char *to)
{
	**s = *to;
}
