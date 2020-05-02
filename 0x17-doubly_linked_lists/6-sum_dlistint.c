#include "lists.h"

/**
 *sum_dlistint - return the sum of all data in list
 *@head: pointer to head
 *
 *Return: sum of all data in success, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
