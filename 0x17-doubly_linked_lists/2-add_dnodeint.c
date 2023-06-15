#include "lists.h"

/**
 * dlistint_len - test
 * @h: asjdg
 * Return: size_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *node = NULL;

    if (!head)
        return (NULL);

    node = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (!node)
        return (NULL);
    node->n = n;
    node->prev = (*head)->prev;
    node->next = *head;
    *head = node;

    return (node);
}
