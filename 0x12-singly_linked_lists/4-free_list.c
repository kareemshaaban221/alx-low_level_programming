#include "lists.h"

/**
 * free_list - ajgd
 * @head: agjd
 * Return: void
*/
void free_list(list_t *head)
{
if (head == NULL) /* base condition */
return;

free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
