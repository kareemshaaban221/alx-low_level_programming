#include "lists.h"

/**
 * free_listint - free a list
 * @head: apiofjdp
 * Return: void
*/
void free_listint(listint_t *head)
{
listint_t *tmp;

if (head)
{
while (head)
{
tmp = head;
free(tmp);
head = head->next;
}
}
}
