#include "lists.h"

/**
 * print_listint - prints list
 *
 * @h: list header
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
    const listint_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		i++;
	}

	return (i);
}
