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

	for (; p != NULL; p = p->n)
	{
		printf("%d ", p->value);
		putchar('\n');
		i++;
	}

	return (i);
}