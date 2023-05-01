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
int index = 0;
listint_t *res = NULL, *tmp = NULL;

if (!*head)
{
if (idx == index)
{
res = create_node(res, n);
*head = res;
}
return (res);
}

while (*head)
{
if (idx == index + 1)
{
tmp = (*head)->next;
res = create_node(res, n);
(*head)->next = res;
res->next = tmp;

return (res);
}

*head = (*head)->next;
}

return (NULL);
}
