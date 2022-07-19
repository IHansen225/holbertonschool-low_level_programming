#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: list header
 * @idx: index
 * @n: number to add
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *next, *prev = NULL;
	unsigned int i;

	if (!head)
		return (NULL);
	next = *head;
	for (i = 0; i < idx; i++)
	{
		if (!next)
			return (NULL);
		prev = next;
		next = next->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next;
	if (prev)
		prev->next = new;
	else
		*head = new;

	return (new);
}
