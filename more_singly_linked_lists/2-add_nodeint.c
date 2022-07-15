#include "lists.h"

/**
 * add_nodeint - prints list length
 *
 * @head: list header
 * @n: number to add
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newelement;

	newelement = malloc(sizeof(listint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = *head;
	newelement->n = n;
	*head = newelement;

	return (*head);
}
