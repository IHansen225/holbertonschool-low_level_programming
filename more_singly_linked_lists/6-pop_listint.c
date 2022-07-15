#include "lists.h"

/**
 * pop_listint - adds node at end of list
 *
 * @head: list header
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *nextelement;
	int n;

	if (!*head)
		return (0);
	nextelement = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nextelement;

	return (n);
}
