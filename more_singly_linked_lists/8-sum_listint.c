#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node in the list
 *
 * @head: list header
 * @index: index to find
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
	while (p->next != NULL)
	{
		i += p->n;
        p = p->next;
	}

	return (i);
}
