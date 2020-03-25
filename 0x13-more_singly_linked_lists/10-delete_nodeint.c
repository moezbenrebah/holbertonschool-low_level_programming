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
listint_t *tmp, *node;
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

while (i < index && tmp)
{
node = tmp;
tmp = tmp->next;
i++;
}

if (tmp != NULL)
{
node->next = tmp->next;
free(tmp);
return (1);
}

return (-1);
}
