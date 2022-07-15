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
	size_t i = 0;

	for (; p != NULL; p = p->next)
	{
        printf("%d", p->n);
		putchar('\n');
	}

	return (i);
}