#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 *
 * @h: list header
 * @idx: index
 * @n: number to add
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newelement, *pr;
	unsigned int i = 0;

	pr = *h;
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
	{
		free(newelement);
		return (NULL);
	}
	newelement->n = n;
	if (*h == NULL)
	{
		*h = newelement;
		newelement->next = NULL;
		newelement->prev = NULL;
		return (newelement);
	}
	while ((pr->next != NULL) && (i + 1 < idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx > i))
	{
		return (NULL);
	}
	if (idx == 0)
		newelement->prev = NULL;
	else
		newelement->prev = pr->next->prev;
	if (pr->next == NULL)
		newelement->next = NULL;
	else
		newelement->next = pr->next;

	return (newelement);
}
