#include "lists.h"

/**
 * print_list - print a list
 *
 * @h: list header
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		printf("%d ", p->n);
		putchar('\n');
		i++;
	}

	return (i);
}