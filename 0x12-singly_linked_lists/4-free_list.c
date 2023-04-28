#include "lists.h"

void free_list(list_t *head)
{
    if (!head) /* base condition */
        free(head);
    else
    {
        free_list(head->next);
    }
}
