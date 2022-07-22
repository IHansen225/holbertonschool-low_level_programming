#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: list header
 * @idx: index
 * @n: number to add
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *prev = NULL;
	unsigned int i;

	if (!h)
		return (NULL);
	next = *h;
	for (i = 0; i < idx; i++)
	{
		if (!next)
			return (NULL);
		prev = next;
		next = next->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next;
	if (prev)
		prev->next = new;
	else
		*h = new;
	new->prev = prev;

	return (new);
}
