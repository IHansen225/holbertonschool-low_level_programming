#include "lists.h"

/**
 * add_node_end - adds node at end of list
 *
 * @head: list header
 * @str: list string
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement, *p;

	p = *head;
	while (p->next != NULL)
		p = p->next;
	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = NULL;
	newelement->str = strdup(str);
	newelement->len = strlen(str);
	p->next = newelement;

	return (*head);
}
