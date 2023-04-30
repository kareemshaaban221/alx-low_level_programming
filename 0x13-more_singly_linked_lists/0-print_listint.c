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
return (0);

while (h->next)
{
len++;
printf("%d\n", h->n);
h = h->next;
}
len++;
printf("%d", h->n);

return (len);
}
