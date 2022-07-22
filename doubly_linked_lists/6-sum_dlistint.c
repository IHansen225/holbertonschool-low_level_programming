#include "lists.h"

/**
 * sum_dlistint - sums every element of a list
 *
 * @head: list header
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int i = 0;

	if (head)
	{
		p = head;
	}
	else
	{
		return (0);
	}
	while (p)
	{
		i += p->n;
		p = p->next;
	}

	return (i);
}
