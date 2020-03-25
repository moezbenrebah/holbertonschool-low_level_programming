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

if (head == NULL || *head == NULL)
return (NULL);

tmp = malloc(sizeof(listint_t));

if (idx)
{
tmp->n = n;
tmp->next = *head;
*head = tmp;
}
new_node = malloc(sizeof(listint_t));
new_node->n = n;

if (idx == 1)
{
new_node->next = tmp;
*head = new_node;
return (NULL);
}

for (i = 1; i < idx - 1; i++)
{
tmp = tmp->next;
}
new_node = tmp->next;
tmp->next = new_node;

return (new_node);
}
