#include "lists.h"

/**
 * create_node - arjgdroa
 * @node: ajgspdio
 * @n: ajgds
 * Return: adfojgmfd
 */
listint_t *create_node(listint_t *node, int n)
{
    node = malloc(sizeof(listint_t));
    if (!node)
        return (NULL);
    node->n = n;
    node->next = NULL;

    return (node);
}

/**
 * insert_nodeint_at_index - ajigsd
 * @head: dsgjaop
 * @idx: aospd
 * @n: aopdfgjm
 * Return: aopdnm
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int index = 0;
    listint_t *res, *tmp, *h;

    if (!head)
        return (NULL);

    if (idx == index)
    {
        res = create_node(res, n);
        if (!res)
            return (NULL);
        res->next = *head;
        *head = res;

        return (res);
    }

    h = *head;
    while (h)
    {
        if (idx == index + 1)
        {
            tmp = h->next;
            res = create_node(res, n);
            if (!res)
                return (NULL);
            h->next = res;
            res->next = tmp;

            return (res);
        }

        h = h->next;
        index++;
    }

    return (NULL);
}
