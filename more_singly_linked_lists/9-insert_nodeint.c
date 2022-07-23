#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: list header
 * @idx: index
 * @n: number to add
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newelement, *pr;
	unsigned int i = 0;

	pr = *h;
	newelement = malloc(sizeof(listint_t));
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
	} else if (idx == 0)
	{
		add_dnodeint(h, n);
		return (newelement);
	}
	while ((pr->next != NULL) && (i + 1 != idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx > i + 1))
	{
		return (NULL);
	} else if (pr->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (newelement);
	}
	newelement->next = pr->next;
	pr->next = newelement;

	return (newelement);
}
