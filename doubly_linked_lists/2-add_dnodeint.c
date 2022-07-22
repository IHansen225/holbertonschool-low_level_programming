#include "lists.h"

/**
 * add_dnodeint - prints list length
 *
 * @head: list header
 * @n: number to add
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newelement;

	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = *head;
	*head = newelement;
	newelement->prev = NULL;
	newelement->n = n;
	if (newelement->next != NULL)
		newelement->next->prev = newelement;

	return (*head);
}
