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
	unsigned int i;

	pr = *h;
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
	{
		free(newelement);
		return (NULL);
	}
	if (*h == NULL)
	{
		*h = newelement;
		newelement->next = NULL;
		newelement->prev = NULL;
		newelement->n = n;
		return (newelement);
	}
	while ((pr->next != NULL) && ((i + 1) != idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx < (i + 1)))
	{
		return (NULL);
	}
	pr->next->prev = newelement;
	newelement->next = pr->next;
	newelement->prev = pr;
	newelement->n = n;
	pr->next = newelement;

	return (newelement);
}
