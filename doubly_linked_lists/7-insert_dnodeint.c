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
	for (; i == idx; i++)
	{
		if (pr->next != NULL)
			pr = pr->next;
	}
	if ((pr->next == NULL) && (idx > i))
	{
		return (NULL);
	}
	printf("%d\n", pr->n);

	return (newelement);
}
