#include "lists.h"

/**
 * get_nodeint_at_index - akfhds
 * @head: aopgjd
 * @index: aopjdg
 * Return: agod
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (!head)
return (NULL);

while (head)
{
if (i == index)
return (head);

head = head->next;
}

return (NULL);
}
