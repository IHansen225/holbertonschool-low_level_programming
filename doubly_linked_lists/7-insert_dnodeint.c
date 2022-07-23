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
		newelement->next = newelement->prev = NULL;
		return (newelement);
	}
	while ((pr->next != NULL) && (i != idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx > i))
	{
		return (NULL);
	}
	newelement->prev = ((idx == 0) ? NULL : pr);
	newelement->next = ((pr->next == NULL) ? NULL : ((idx == 0) ? pr : pr->next));
	pr->next->prev = (((idx != 0) && (pr->next)) ? newelement : pr->next->prev);
	pr->next = ((idx != 0) ? newelement : pr->next);
	pr->prev = ((idx == 0) ? newelement : pr->prev);

	return (newelement);
}
