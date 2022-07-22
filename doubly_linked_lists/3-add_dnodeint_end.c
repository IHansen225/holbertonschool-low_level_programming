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
	dlistint_t *newelement, *p;

	p = *head;
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = NULL;
	newelement->n = n;
	if (*head == NULL)
	{
		*head = newelement;
		return (*head);
	}
	while (p->next != NULL)
		p = p->next;
	p->next = newelement;
	newelement->prev = p;
	return (*head);
}
