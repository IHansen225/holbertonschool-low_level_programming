#include "lists.h"

/**
 * list_len - prints list length
 *
 * @h: list header
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = *head;
	newelement->str = strdup(str);
	newelement->len = strlen(str);
	*head = newelement;

	return (*head);
}