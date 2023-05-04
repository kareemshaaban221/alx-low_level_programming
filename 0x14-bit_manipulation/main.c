#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n, i = -5;

    for (; i < 20; i++)
    {
        n = get_bit(1, i);
        printf("%d\n", n);
    }

    return (0);
}