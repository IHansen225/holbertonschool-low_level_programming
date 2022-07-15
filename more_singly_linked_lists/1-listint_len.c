#include "lists.h"

/**
 * listint_len - prints list length
 *
 * @h: list header
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		i++;
	}

	return (i);
}
