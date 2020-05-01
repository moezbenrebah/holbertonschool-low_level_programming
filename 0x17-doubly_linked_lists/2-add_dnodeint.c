#include "lists.h"

/**
 *add_dnodeint - function to add node at the beginning of the list
 *@head: pointer to head
 *@n: data
 *
 *Return: new node if success, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
