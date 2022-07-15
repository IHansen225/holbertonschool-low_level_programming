#include "lists.h"

/**
 * free_listint2 - adds node at end of list
 *
 * @head: list header
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *p_elem, *elem;

	if (head == NULL)
    {
        *head = NULL;
        exit(1);
    }
    elem = *head;
	while (elem)
	{
		p_elem = elem;
		elem = elem->next;
		free(p_elem);
	}
    *head = NULL;
}
