#include "lists.h"

/**
 * add_nodeint - jagpo
 * @head: agjopdf
 * @n: aogjdos
 * Return: list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h = *head;

if (!h)
{
h = malloc(sizeof(listint_t));
h->n = n;
h->next = NULL;
return (h);
}

while (h)
{
if (!h->next)
{
h->next = malloc(sizeof(listint_t));
h->next->n = n;
h->next->next = NULL;

return (h->next);
}
h = h->next;
}
}
