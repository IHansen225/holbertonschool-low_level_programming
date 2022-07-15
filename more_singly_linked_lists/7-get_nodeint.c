#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node in the list
 *
 * @head: list header
 * @index: index to find
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
    unsigned int i = 0;

	p = head;
	while ((p->next != NULL) && (i <= index))
    {
		p = p->next;
        i++;
    }
    if (i > index)
    {
        return (NULL);
    }

	return (p);
}
