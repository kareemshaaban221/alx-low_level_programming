#include "lists.h"

void print_size(int n) {
    if (n <= 1)
        printf("-> %d element\n", n);
    else
        printf("-> %d elements\n", n);
}

size_t print_dlistint(const dlistint_t *h) {
    int len = 0;

    if (!h) {
        print_size(0);
        return;
    }

    while (h) {
        printf("%d\n", h->n);
        len++;
        h = h->next;
    }

    print_size(len);
    return (len);
}