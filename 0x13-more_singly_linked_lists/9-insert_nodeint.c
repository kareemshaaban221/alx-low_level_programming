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
listint_t *res = NULL, *tmp = NULL, *h, *pre;

if (!head)
return (NULL);

if (idx == index)
{
res = create_node(res, n);
res->next = *head;
*head = res;

return (res);
}

h = *head;
pre = NULL;
while (h)
{
if (idx == index)
{
tmp = h;
res = create_node(res, n);
h = res;
res->next = tmp;
if (pre)
pre->next = res;

return (res);
}

pre = h;
h = h->next;
index++;
}

return (NULL);
}
