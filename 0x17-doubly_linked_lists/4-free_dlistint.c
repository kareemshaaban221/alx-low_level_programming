#include "lists.h"

/**
 * free_dlistint - test
 * @head: asjdg
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = head, *tmp = NULL;
if (head != NULL)
{
while (h && h->next)
h = h->next;
while (h)
{
tmp = h;
h = h->prev;
free(tmp);
}
}
}
