#include "lists.h"

/**
 * listint_len - gasdklfn
 * @h: akgsdf
 * Return: gajsdpog
*/
size_t listint_len(const listint_t *h)
{
size_t len = 0;

while (h)
{
len++;
h = h->next;
}

return (len);
}
