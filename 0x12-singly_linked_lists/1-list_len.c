#include "lists.h"

/**
 * list_len - asegdj
 * @h: ajgdso
 * Return: aigdsf
*/
size_t list_len(const list_t *h)
{
int res = 0;

while (h)
{
res++;
h = h->next;
}

return (res);
}
