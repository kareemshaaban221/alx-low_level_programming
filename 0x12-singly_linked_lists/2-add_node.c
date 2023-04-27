#include "lists.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(const char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * add_node - agjods
 * @head: ajdgopa
 * @str: ajgpo
 * Return: List_t
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *res;
list_t *h;

res = malloc(sizeof(list_t));
if (!res)
return (NULL);

res->str = strdup(str);
res->next = NULL;
res->len = _strlen(str);

if (!head)
*head = res;
else
{
h = *head;
*head = res;
res->next = h;
}

return (res);
}
