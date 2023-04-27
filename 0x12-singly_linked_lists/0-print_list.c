#include "lists.h"

/**
 * print_node - adsgjna
 * @h: asgkd
 * Return: int
*/
int print_node(list_t *h)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);

return (1);
}

/**
 * print_list_handle - adsgjna
 * @h: asgkd
 * @print: asgdap
 * Return: size_t
*/
size_t print_list_handle(const list_t *h, int (*print)(list_t *))
{
list_t *p = h;
size_t n = 0;

while (p)
{
n += print(p);
p = p->next;
}

return (n);
}

/**
 * print_list - adsgjna
 * @h: asgkd
 * Return: size_t
*/
size_t print_list(const list_t *h)
{
return (print_list_handle(h, print_node));
}
