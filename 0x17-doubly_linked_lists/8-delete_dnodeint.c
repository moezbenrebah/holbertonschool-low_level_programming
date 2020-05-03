#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index
 *@head: pointer to pointer to head
 *@index: position to delete
 *
 *Return: 1 on success, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (head != NULL)
	{
		for (tmp = *head; index && tmp; index--, tmp = tmp->next)
			;
		if (!tmp && index)
		{
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*head = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
