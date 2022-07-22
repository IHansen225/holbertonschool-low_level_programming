#include "lists.h"

/**
 * add_dnodeint_end - prints list length
 *
 * @head: list header
 * @n: number to add
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newelement, *previous;

	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
	{
		free(newelement);
		return (NULL);
	}
	newelement->next = NULL;
	newelement->n = n;
	previous = *head;
	while (previous->next != NULL)
		previous = previous->next;
	previous->next = newelement;
	newelement->prev = previous;

	return (*head);
}
