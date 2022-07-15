#include "lists.h"

/**
 * sum_listint - sums every element of a list
 *
 * @head: list header
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
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
