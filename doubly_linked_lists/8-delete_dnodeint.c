#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 *
 * @h: list header
 * @index: index
 * @n: number to add
 * Return: 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pr, *aux;
	unsigned int i = 0;

	pr = *head;
	if (*head == NULL)
	{
		return (1);
	}
	while ((pr->next != NULL) && (i + 1 != index))
	{
		pr = pr->next;
		i++;
	}
	aux = pr->next->next;
	free(pr->next);
	pr->next = aux;
	pr->next->prev = pr;

	return (1);
}
