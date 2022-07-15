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
		if (p->str != NULL)
		{
			printf("[%u] %s", p->len, p->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		i++;
		putchar('\n');
	}

	return (i);
}