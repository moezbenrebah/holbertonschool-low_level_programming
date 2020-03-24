#include "lists.h"


/**
 *add_nodeint_end - function to add a node at the end of list
 *@head: double pointer to head of the list
 *@n: integer to add
 *
 *Return: address of the new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

tmp = *head;

while (tmp->next)
tmp = tmp->next;

tmp->next = new_node;
return (new_node);
}
