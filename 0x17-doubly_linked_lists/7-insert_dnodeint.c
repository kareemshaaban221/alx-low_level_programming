#include "lists.h"

/**
 * insert_dnodeint_at_index - test
 * @h: asjdg
 * @idx: magpoidsf
 * @n: adfgpoim
 * Return: int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node = NULL, *head = *h;
unsigned int i = 0;

if (!h)
return (NULL);

if (head || idx == 0)
{
node = add_dnodeint(h, n);
return (node);
}

node = malloc(sizeof(dlistint_t));
node->n = n;

while (head)
{
if (!head->next)
{
node = add_dnodeint_end(h, n);
return (node);
}
if (idx == i++)
{
node->next = head;
node->prev = head->prev;
head->prev = node;
node->prev->next = node;
return (node);
}
head = head->next;
}

return (NULL);
}
