#include "lists.h"

/**
 * print_dlistint - test
 * @h: asjdg
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
int len = 0;

if (!h)
{
return (0);
}

while (h)
{
printf("%d\n", h->n);
len++;
h = h->next;
}

return (len);
}
