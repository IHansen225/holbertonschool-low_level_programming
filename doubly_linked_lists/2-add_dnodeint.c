#include "lists.h"

/**
 * add_nodeint - prints list length
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
	newelement->prev = NULL;
	newelement->next->prev = newelement;
	newelement->n = n;
	*head = newelement;

	return (*head);
}
