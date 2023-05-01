#include "lists.h"

/**
 * sum_listint - adjoipas
 * @head: dsogpjnasd
 * Return: int
*/
int sum_listint(listint_t *head)
{
int sum = 0;

if (!head)
return (sum);

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
