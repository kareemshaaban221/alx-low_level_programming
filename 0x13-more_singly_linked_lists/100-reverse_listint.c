#include "lists.h"

/**
 * reverse_listint - adfjogpa
 * @head: sdapog
 * Return: dasgpo
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre, *post;

if (!head)
return (NULL);

if (!(*head) || !((*head)->next))
return (*head);

pre = (*head);
*head = (*head)->next;
pre->next = NULL;
while (*head)
{
post = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = post;
}

*head = pre;

return (*head);
}
