#include "lists.h"

/**
 *get_dnodeint_at_index - get the nth node
 *@head: pointer to head
 *@index: index of node
 *
 *Return: address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (!tmp)
		return (NULL);

	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
