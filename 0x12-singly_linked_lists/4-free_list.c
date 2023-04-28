#include "lists.h"

/**
 * free_list - ajgd
 * @head: agjd
 * Return: void
*/
void free_list(list_t *head)
{
if (!head) /* base condition */
{
free(head);
return;
}

free_list(head->next);
free(head);
}
