#include "lists.h"

/**
* print_dlistint - function to create and display a doubly liknked list
*@h: a node in the list
*
*Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
