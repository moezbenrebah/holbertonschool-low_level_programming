#include "lists.h"

/**
 *sum_listint - return the sum of all the data
 *@head: pointer to a head
 *
 *Return: sum
 */


int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr;

ptr = head;

while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
