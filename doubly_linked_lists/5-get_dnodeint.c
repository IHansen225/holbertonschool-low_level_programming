#include "lists.h"

/**
 * get_dnodeint_at_index - finds nth node in the list
 *
 * @head: list header
 * @index: index to find
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	if (head)
	{
		p = head;
	}
	else
	{
		return (NULL);
	}
	while ((p->next != NULL) && (i != index))
	{
		p = p->next;
		i++;
	}
	if ((p->next == NULL) && (index > i))
	{
		return (NULL);
	}

	return (p);
}
