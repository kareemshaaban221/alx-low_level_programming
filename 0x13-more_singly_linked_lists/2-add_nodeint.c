#include "lists.h"

/**
 * add_nodeint - jagpo
 * @head: agjopdf
 * @n: aogjdos
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *h;

    if (!*head)
    {
        h = malloc(sizeof(listint_t));
        if (!h)
            return (NULL);

        h->n = n;
        h->next = NULL;

        *head = h;

        return (h);
    }

    h = *head;
    while (h->next)
    {
        h = h->next;
    }

    h->next = malloc(sizeof(listint_t));
    if (!h->next)
        return (NULL);
    h->next->n = n;
    h->next->next = NULL;

    return (h->next);
}
