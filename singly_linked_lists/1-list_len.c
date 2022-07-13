#include "lists.h"

/**
 * print_list - print a list
 *
 * @h: list header
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int i = 0;

	for (; p != NULL; p = p->next)
	{
		i++;
	}

	return (i);
}
