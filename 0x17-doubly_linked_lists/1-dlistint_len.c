#include "lists.h"

/**
 * dlistint_len - test
 * @h: asjdg
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
int len = 0;

if (!h)
{
return (0);
}

while (h)
{
len++;
h = h->next;
}

return (len);
}
