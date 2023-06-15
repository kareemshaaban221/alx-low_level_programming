#include "lists.h"

/**
 * dlistint_len - test
 * @h: asjdg
 * Return: size_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
