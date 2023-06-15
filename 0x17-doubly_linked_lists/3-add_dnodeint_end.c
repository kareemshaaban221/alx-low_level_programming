#include "lists.h"

/**
 * add_dnodeint_end - test
 * @head: asjdg
 * @n: aogjdspo
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = NULL, *temp = NULL;

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;

if (!(*head))
{
new->prev = NULL;
*head = new;
}
else
{
temp = *head;
while (temp)
{
if (!(temp)->next)
{
new->prev = temp;
(temp)->next = new;
break;
}
temp = (temp)->next;
}
}
return (new);
}
