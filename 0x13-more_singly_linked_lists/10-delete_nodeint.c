#include "lists.h"

/**
 *delete_nodeint_at_index - delete node at given position
 *@head: double pointer to head
 *@index: given position to delete
 *
 *Return: 1 if it succeeded
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *next;
unsigned int i = 0;

tmp = *head;

if (*head == NULL || head == NULL)
return (-1);

if (index == 0)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
return (1);
}

while (tmp != NULL && i < index - 1)
{
tmp = tmp->next;
i++;
}

next = tmp->next->next;

if (tmp == NULL || tmp->next == NULL)
return (-1);

free(tmp->next);
tmp->next = next;

return (1);
}
