#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at nth position
 *@h: pointer to head
 *@idx: position to insert node
 *@n: data
 *
 *Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);
	tmp = *h;
	while (idx > 1 && tmp && tmp->next)
	{
		tmp = tmp->next;
		--idx;
	}
	if (idx > 1 || !tmp)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
