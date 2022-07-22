#include "lists.h"

/**
 * free_dlistint - adds node at end of list
 *
 * @head: list header
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p_elem, *elem;

	elem = head;
	while (elem)
	{
		p_elem = elem;
		elem = elem->next;
		free(p_elem);
	}
}
