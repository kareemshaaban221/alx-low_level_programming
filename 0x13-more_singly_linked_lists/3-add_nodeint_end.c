#include "lists.h"

/**
 * add_nodeint_end - sagj
 * @head: akgosd
 * @n: aojfdo
 * Return: list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;

if (!*head)
{
h = malloc(sizeof(listint_t));
if (!h)
return (NULL);

h->n = n;
h->next = NULL;

*head = h;

return (h);
}

h = *head;
while (h->next)
{
h = h->next;
}

h->next = malloc(sizeof(listint_t));
if (!h->next)
return (NULL);
h->next->n = n;
h->next->next = NULL;

return (h->next);
}
