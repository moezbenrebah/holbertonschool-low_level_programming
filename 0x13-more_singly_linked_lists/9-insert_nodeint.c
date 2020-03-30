#include "lists.h"

/**
 *insert_nodeint_at_index - insert node at a nth position
 *@head: double pointer to a head
 *@idx: position to insert node
 *@n: integer
 *
 *Return: address a node to insert
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp, *new_node;
unsigned int i;

if (head == NULL)
return (NULL);

tmp = *head;
i = 1;

while (i < idx && tmp)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
i++;
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;


if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

new_node->next = tmp->next;
tmp->next = new_node;

return (new_node);
}
