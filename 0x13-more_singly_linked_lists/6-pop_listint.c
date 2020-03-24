#include "lists.h"


/**
 *pop_listint - delete the head node
 *@head: double pointer to a head node
 *
 *Return: data of node
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (*head == NULL)
return (0);
else
tmp = *head;
n = (*head)->n;
*head = (*head)->next;

free(tmp);

return (n);
}
