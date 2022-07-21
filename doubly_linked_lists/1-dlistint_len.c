#include "lists.h"

/**
 * list_len - prints list length
 *
 * @h: list header
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		i++;
	}

	return (i);
}
