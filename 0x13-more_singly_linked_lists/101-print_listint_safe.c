#include "lists.h"

/**
 * print_listint_safe - gasdklfn
 * @head: akgsdf
 * Return: gajsdpog
 */
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
listint_t *s = (listint_t *) head, *e = (listint_t *) head;
listint_t *h = (listint_t *) head;
int f = 0;

while (head)
{
len++;
printf("[%p] %d\n", (void *) head, head->n);
e = (listint_t *) head;
head = head->next;
while (s != e)
{
if (s == head)
{
f = 1;
printf("-> [%p] %d\n", (void *) s, s->n);
break;
}
s = s->next;
}
if (f == 1 && s != h)
break;
s = h;
}

return (len);
}
