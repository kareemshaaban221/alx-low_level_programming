#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* @argc: count of cli arguments
* @argv: command line arguments
* Return: integer
*/
int main(int argc, char **argv)
{
    int res = 0;
    int n = 0;
    int coins[] = {25, 10, 5, 2, 1};
    int i = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    n = atoi(argv[1]);

    if (n < 0)
    {
        printf("0\n");
        return (0);
    }

    for (i = 0; i < 5; i++)
    {
        res += n / coins[i];
        n %= coins[i];
    }

    printf("%d\n", res);

    return (0);
}
