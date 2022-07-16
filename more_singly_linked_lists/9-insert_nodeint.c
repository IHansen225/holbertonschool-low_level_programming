#include "lists.h"

/**
 * add_nodeint - prints list length
 *
 * @head: list header
 * @n: number to add
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newelement, *prev;
    unsigned int i;

	newelement = malloc(sizeof(listint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->n = n;
    prev = *head;
    while ((prev) && (i != (idx - 1)))
    {
        prev = prev->next;
    }
    if (prev == NULL)
    {
        return (NULL);
    }
    newelement->next = prev->next;
    prev->next = newelement;

	return (*newelement);
}
