#include <stdio.h>

/**
 * main - entry point
 * @argc: count of cli arguments
 * @argv: command line arguments
 * Return: integer
*/
int main(int argc, char **argv)
{
if (argv)
{
printf("%d\n", argc - 1);
}

return (0);
}

