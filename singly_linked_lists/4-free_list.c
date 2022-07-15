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
	if (head != NULL)
		free(head);
}
