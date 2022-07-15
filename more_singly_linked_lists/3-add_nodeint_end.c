#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 *
 * @head: list header
 * @n: number to add to list
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newelement, *p;

	p = *head;
	newelement = malloc(sizeof(listint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = NULL;
	newelement->n = n;
	if (*head == NULL)
	{
		*head = newelement;
		return (*head);
	}
	while (p->next != NULL)
		p = p->next;
	p->next = newelement;

	return (*head);
}
