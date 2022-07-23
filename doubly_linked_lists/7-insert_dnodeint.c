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

	(void) n;
	if (!*h)
	{
		return (NULL);
	}
	pr = *h;
	while ((pr->next != NULL) && (i != idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx < (i + 1)))
	{
		return (NULL);
	}
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
	{
		return (NULL);
	}

	return (newelement);
}
