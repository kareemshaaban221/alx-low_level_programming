#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: apiofjdp
 * Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head)
{
while ((*head))
{
tmp = (*head);
(*head) = (*head)->next;
free(tmp);
}
}

head = NULL;
}
