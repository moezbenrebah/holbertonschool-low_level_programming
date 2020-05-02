#include "lists.h"

/**
 *free_dlistint - free list
 *@head: pointer to head
 *
 *Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
