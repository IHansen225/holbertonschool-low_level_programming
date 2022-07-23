#include "lists.h"

/**
 * delete_nodeint_at_index - function
 *
 * @head: list header
 * @index: index
 * Return: something
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pr, *aux;
	unsigned int i = 0;

	pr = *head;
	if (*head == NULL)
	{
		return (-1);
	} else if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while ((pr->next != NULL) && (i + 1 != index))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (index > i + 1))
	{
		return (-1);
	}
	aux = pr->next;
	if (pr->next->next == NULL)
		pr->next = NULL;
	else
	{
		pr->next = pr->next->next;
	}
	free(aux);

	return (1);
}
