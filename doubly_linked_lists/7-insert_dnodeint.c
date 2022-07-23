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
	dlistint_t *newelement, *p, *n;
	unsigned int i;

	if (!*h)
	{
		return (NULL);
	}
	p = *h;
	while ((p->next != NULL) && (i != idx))
	{
		p = p->next;
		i++;
	}
	if ((p->next == NULL) && (idx < (i + 1)))
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
