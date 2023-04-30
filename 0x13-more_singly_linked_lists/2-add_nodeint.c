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

    h = malloc(sizeof(listint_t));
    if (!h)
        return (NULL);
    h->n = n;
    h->next = (*head);

    *head = h;

    return (*head);
}
