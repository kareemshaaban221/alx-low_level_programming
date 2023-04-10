#include <stdio.h>

/**
 * main - entry point
 * @argc: count of cli arguments
 * @argv: command line arguments
 * Return: integer
*/
int main(int argc, char **argv)
{
if (argc > 0)
{
while (argc--)
{
printf("%s\n", *argv);
argv++;
}
}

return (0);
}
