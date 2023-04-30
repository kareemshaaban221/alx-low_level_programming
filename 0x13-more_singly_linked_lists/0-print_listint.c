#include "lists.h"

/**
 * print_listint - gasdklfn
 * @h: akgsdf
 * Return: gajsdpog
*/
size_t print_listint(const listint_t *h)
{
size_t len = 0;

if (!h)
{
printf("\n");
return (0);
}

while (h)
{
len++;
printf("%d\n", h->n);
h = h->next;
}

return (len);
}
