#include "lists.h"

/**
 * delete_nodeint_at_index - ladgjof
 * @head: akgdnpo
 * @index: agpodfm
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 1;
listint_t *lp, *h, *pre;

if (!head)
return (-1);

if (!*head)
return (-1);

if (index == 0)
{
lp = *head;
*head = (*head)->next;
free(lp);
return (1);
}

h = (*head)->next;
pre = *head;
while (h)
{
if (i == index)
{
lp = h;
pre->next = h->next;
free(lp);
return (1);
}

pre = h;
h = h->next;
i++;
}

return (-1);
}
