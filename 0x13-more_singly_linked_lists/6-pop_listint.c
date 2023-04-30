#include "lists.h"

/**
 * pop_listint - agjsdo
 * @head: asdighja
 * Return: aodfjpo
*/
int pop_listint(listint_t **head)
{
int res = 0;
listint_t *tmp;

if (!head || *head == NULL)
return (res);

res = (*head)->n;
tmp = (*head);
(*head) = (*head)->next;
free(tmp);

return (res);
}
