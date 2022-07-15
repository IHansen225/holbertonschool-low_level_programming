#include "lists.h"

/**
 * add_node_end - adds node at end of list
 *
 * @head: list header
 * @str: list string
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *p_elem, *elem;

	elem = head;
	while (elem)
	{
		p_elem = elem;
		elem = elem->next;
		free(p_elem->str);
		free(p_elem);
	}
}
