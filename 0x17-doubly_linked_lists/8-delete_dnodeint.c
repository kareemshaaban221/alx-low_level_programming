#include "lists.h"

/**
 * delete_dnodeint_at_index - function with two arguments
 * @head: pointer to double linked list
 * @index: index position to delete node
 *
 * Description: delete node at index position
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *crs = *head;

if (!head)
return (-1);
if (head)
{
while (index && crs)
{
crs = crs->next;
index--;
}
if (index)
return (-1);
if (!index && crs)
{
if (crs->next)
crs->next->prev = crs->prev;
if (crs->prev)
crs->prev->next = crs->next;
else
*head = crs->next;
free(crs);
return (1);
}
}
return (-1);
}
